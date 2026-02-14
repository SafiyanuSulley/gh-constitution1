#include "include_project/TerminalGuard.hpp"
#include <iostream>
#include <cstdlib>
#include <csignal>
#include <exception>


bool TerminalGuard::echo_was_disabled = false;

TerminalGuard::TerminalGuard()
{
  std::system("stty -echo");
  echo_was_disabled = true;

  std::signal(SIGINT, signalHandler);
  std::signal(SIGTERM, signalHandler);
  std::set_terminate(terminateHandler);
}

 TerminalGuard::~TerminalGuard()
 {
    if(echo_was_disabled)
    {
        std::system("stty echo");
        echo_was_disabled = false;
        std::cout<< std::flush;
    }
 }

  void TerminalGuard::signalHandler(int signal)
  {
    if(echo_was_disabled)
    {
        std::system("stty echo");
        echo_was_disabled = false;
    }
      std::exit(signal);
  }

    void TerminalGuard::terminateHandler()
    {
        if(echo_was_disabled)
        {
            std::system("stty echo");
            echo_was_disabled = false;
        }
          std::abort();
    }
  