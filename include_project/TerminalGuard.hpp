#include<csignal>
#include<exception>
#ifndef TERMINAL_GUARD_HPP
#define TERMINAL_GUARD_HPP

class TerminalGuard
{
 private:
     static bool echo_was_disabled;

 public:
     TerminalGuard();
     ~TerminalGuard();

     TerminalGuard(const TerminalGuard&) = delete;
     TerminalGuard& operator=(const TerminalGuard&) = delete;

     static void signalHandler(int signal);
     static void terminateHandler();
};

 #endif