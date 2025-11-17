#include "/Users/safiyanusulley/projects/include_project/header_proj.hpp"
#include<iostream>
#include<string>
#include<utility>
#include<limits>
#include<algorithm>

using namespace std;
int main()
{
    string s,  article; uint_least16_t choice;
    while(true)
    {
        cout<< "Enter Article: (enter:\"Exit\" to quit) ";
        cin >> article;
        cout<<"\n"; 
        if(article == "Exit")
        { 
          cout<< "Good Bye, Au revoir.\n"; 
          break;
        }
          // if empty and not in the scope of digits
        if(article.empty() || !std::all_of(article.begin(), article.end(), ::isdigit)) 
        {
          cout<< "Try again ";
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          /*in while loop any scope within braces ex. if{...} or a function(...),
            if it doesn't want to go back to the 1st statement in the while 
            loop must use "break" within the scope to mean stop or use "continue"
            to mean go to next statement. */
        }

        if(article == "1")
      { 
         while(true)
        {
          cout<< "     ~select menu~\n";
          cout<< "1.clause(1) 2.clause(2)\n"; 
          cin >> choice;
        if(choice < 1 || choice > 2)
        {
          cout<<"~ re-select menu ~\n"; 
          cin>>choice;
        }
          break;
        }
        
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        switch(choice)
        {
          case 1: Art_1::Clause_1(move(s)); break;
          case 2: Art_1::Clause_2(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
      }

        else if(article == "2")
      {
        while(true)
        {
          cout<< "          ~select menu~\n";
          cout<< "1.clause(1ab) 2.clause(2)   3.clause(3)\n";
          cout<< "4.clause(4)   5.section(5a) 6.section(5b)\n";
          cin >> choice;
          if(choice < 1 || choice > 6)
          {
            cout<< "~ re-select menu ~\n"; 
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');     
        }
        switch(choice)
        {
          case 1: Art_2::Clause_1ab(move(s)); break; //(1a) (1b) non-detailed
          case 2: Art_2::Clause_2(move(s)); break;
          case 3: Art_2::Clause_3(move(s)); break;
          case 4: Art_2::Clause_4(move(s)); break;
          case 5: Art_2::Section_5a(move(s)); break;
          case 6: Art_2::Section_5b(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
      }

        else if(article == "3")
      {
        while(true)
        {
          cout<< "           ~select menu~\n";
          cout<< "1.clause(1)   2.clause(2)   3.section(3a)\n";
          cout<< "4.section(3b) 5.section(4a) 6.section(4b)\n";
          cout<< "7.clause(5)   8.clause(6)   9.clause(7)\n";
          cin >> choice;
          if(choice < 1 || choice > 9)
          {
            cout<< "~ re-select menu ~\n";  
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');    
        }
        switch(choice)
        {
          case 1: Art_3::Clause_1(move(s)); break;
          case 2: Art_3::Clause_2(move(s)); break;
          case 3: Art_3::Section_3a(move(s)); break; // clause_3 too short to stand
          case 4: Art_3::Section_3b(move(s)); break;
          case 5: Art_3::Section_4a(move(s)); break;
          case 6: Art_3::Section_4b(move(s)); break;
          case 7: Art_3::Clause_5(move(s)); break;
          case 8: Art_3::Clause_6(move(s)); break;
          case 9: Art_3::Clause_7(move(s)); break;
          default: cout<< "Invalid Input\n"; 
        }
      }

        else if(article == "4")
      {
        while(true)
        {
          cout<< "     ~select menu~\n";
          cout<< "1.clause(1) 2.clause(2)\n";
          cin >> choice;
          if(choice < 1 || choice > 2)
          {
            cout<< "~ re-select menu ~\n";  
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');    
        }
        switch(choice)
        {
          case 1: Art_4::Clause_1(move(s)); break;
          case 2: Art_4::Clause_2(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
      }

        else if(article == "5")
      {
        while(true)
        {
          cout<< "              ~select menu~\n";
          cout<< " 1.section(1a) 2.section(1b) 3.section(1c)\n";
          cout<< " 4.section(2a) 5.section(2b) 6.section(2c)\n";
          cout<< " 7.clause(3)   8.clause(4)   9.clause(5)\n";
          cout<< "10.clause(6)  11.clause(7)  12.clause(8)\n";
          cin >> choice;
          if(choice < 1 || choice > 12)
          {
            cout<< "~ re-select menu ~\n";  
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_5::Section_1a(move(s)); break;
          case 2: Art_5::Section_1b(move(s)); break;
          case 3: Art_5::Section_1c(move(s)); break; 
          case 4: Art_5::Section_2a(move(s)); break;
          case 5: Art_5::Section_2b(move(s)); break;
          case 6: Art_5::Section_2c(move(s)); break;
          case 7: Art_5::Clause_3(move(s)); break;
          case 8: Art_5::Clause_4(move(s)); break;
          case 9: Art_5::Clause_5(move(s)); break;
          case 10: Art_5::Clause_6(move(s)); break;
          case 11: Art_5::Clause_7(move(s)); break;
          case 12: Art_5::Clause_8(move(s)); break; 
          default: cout<< "Invalid Input\n"; 
        }  
      }

        else if(article == "6")
      {
        while(true)
        {
          cout<< "     ~select menu~\n";
          cout<< "1.clause(1) 2.clause(2)\n";
          cout<< "3.clause(3) 4.clause(4)\n";
          cin >> choice;
          if(choice < 1 || choice > 4)
          {
            cout<< "~ re-select menu ~\n";  
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_6::Clause_1(move(s)); break;
          case 2: Art_6::Clause_2(move(s)); break;
          case 3: Art_6::Clause_3(move(s)); break;
          case 4: Art_6::Clause_4(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
        
      }
        else if(article == "7")
      {
        while(true)
        {
          cout<< "          ~ select menu ~\n";
          cout<< "1.clause(1) 2.clause(2) 3.clause(3)\n";
          cout<< "4.clause(4) 5.clause(5) 6.clause(6)\n";
          cin >> choice;
          if(choice < 1 || choice > 6)
          {
            cout<< "~ re-select menu ~\n";  
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_7::Clause_1(move(s)); break;
          case 2: Art_7::Clause_2(move(s)); break;
          case 3: Art_7::Clause_3(move(s)); break;
          case 4: Art_7::Clause_4(move(s)); break;
          case 5: Art_7::Clause_5(move(s)); break;
          case 6: Art_7::Clause_6(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
      }

      else if(article == "8")
      {
        while(true)
        {
          cout<< "            ~ select menu ~\n";
          cout<< "1.clause(1)   2.section(2a)  3.section(2b)\n";
          cout<< "4.section(2c) 5.section(2d)  6.section(2e)\n";
          cout<< "7.section(2f) 8.section(2g)  9.clause(3)\n";
          cin >> choice;
          if(choice < 1 || choice > 9)
          {
            cout<< "~ re-select menu ~\n";  
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_8::Clause_1(move(s)); break;
          case 2: Art_8::Section_2a(move(s)); break;
          case 3: Art_8::Section_2b(move(s)); break;
          case 4: Art_8::Section_2c(move(s)); break;
          case 5: Art_8::Section_2d(move(s)); break;
          case 6: Art_8::Section_2e(move(s)); break;
          case 7: Art_8::Section_2f(move(s)); break;
          case 8: Art_8::Section_2g(move(s)); break;
          case 9: Art_8::Clause_3(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
      }

      else if(article == "9")
      {
        while(true)
        {
          cout<< "      ~ select menu ~\n";
          cout<< "1.clause(1)   2.clause(2)\n";
          cout<< "3.clause(3)   4.section(3a)\n";
          cout<< "5.section(3b) 6.clause(4)\n";
          cout<< "7.section(5a) 8.section(5b)\n";
          cin >> choice;
          if(choice < 1 || choice > 8)
          {
            cout<< "~ re-select menu ~\n";  
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_9::Clause_1(move(s)); break;
          case 2: Art_9::Clause_2(move(s)); break;
          case 3: Art_9::Clause_3(move(s)); break;
          case 4: Art_9::Clause_3(move(s)); 
                  Art_9::Section_3a(move(s)); break;
          case 5: Art_9::Clause_3(move(s));
                  Art_9::Section_3b(move(s)); break;
          case 6: Art_9::Clause_4(move(s)); break;
          case 7: Art_9::Section_5a(move(s)); break;
          case 8: Art_9::Section_5b(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
      }

      else if(article == "10")
      {
        while(true)
        {
          cout<< "       ~ select ~\n";
          cout<< "1.clause(1) 2.clause(2)\n";
          cin >> choice;
          if(choice < 1 || choice > 2)
          {
            cout<< "~ re-select ~\n";
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_10::Clause_1(move(s)); break;
          case 2: Art_10::Clause_2(move(s)); break;
          default: cout<< "Invalid Input\n";
        }
      }

      else if(article == "11")
      {
        while(true)
        {
          cout<< "               ~ select menu ~\n";
          cout<<" 1.section(1a)  2.section(1b)  3.section(1c)\n"; //if 2 digits space quote and single digit for arrangement
          cout<<" 4.section(1d)  5.section(1e)  6.clause(2)\n";
          cout<<" 7.clause(3)    8.clause(4)    9.clause(5)\n";
          cout<<"10.clause(6)   11.section(7a) 12.section(7b)\n";
          cout<<"13.section(7c) 14.(.........) 15.(.........)\n";
          cin >> choice;
          if(choice < 1 || choice > 13)
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_11::Section_1a(move(s)); break;
          case 2: Art_11::Section_1b(move(s)); break;
          case 3: Art_11::Section_1c(move(s)); break;
          case 4: Art_11::Section_1d(move(s)); break;
          case 5: Art_11::Section_1e(move(s)); break;
          case 6: Art_11::Clause_2(move(s)); break;
          case 7: Art_11::Clause_3(move(s)); break;
          case 8: Art_11::Clause_4(move(s)); break;
          case 9: Art_11::Clause_5(move(s)); break;
          case 10: Art_11::Clause_6(move(s)); break; 
          case 11: Art_11::Section_7a(move(s)); break;
          case 12: Art_11::Section_7b(move(s)); break;
          case 13: Art_11::Section_7c(move(s)); break;             
        }
      }

      else if(article == "12")
      {
        while(true)
        {
          cout<< "     ~ select menu ~\n";
          cout<< "1.clause(1) 2.clause(2)\n";
          cin >> choice;
          if(choice < 1 || choice > 2)
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_12::Clause_1(move(s)); break;
          case 2: Art_12::Clause_2(move(s)); break;
        }
      }

      else if(article == "13")
      {
        while(true)
        {
          cout<< "           ~ select menu ~\n";
          cout<< "1.clause(1)   2.clause(2)   3.section(2a)\n";
          cout<< "4.section(2b) 5.section(2c) 6.section(2d)\n";
          cin >> choice;
          if(choice < 1 || choice > 6)
          {
            cout<< "~ re-select menu ~\n"; 
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_13::Clause_1(move(s)); break;
          case 2: Art_13::Clause_2(move(s)); break;
          case 3: Art_13::Clause_2(move(s));
                  Art_13::Section_2a(move(s)); break;
          case 4: Art_13::Clause_2(move(s));
                  Art_13::Section_2b(move(s)); break;
          case 5: Art_13::Clause_2(move(s));
                  Art_13::Section_2c(move(s)); break;
          case 6: Art_13::Clause_2(move(s));
                  Art_13::Section_2d(move(s)); break;
        }
      }

      else if(article == "14")
      {
        while(true)
        {
          cout<< "                    ~ select menu ~\n";
          cout<< " 1.clause(1)   2.section(1a) 3.section(1b)   4.section(1c)\n";
          cout<< " 5.section(1d) 6.section(1e) 7.section(1f)   8.section(1g)\n";
          cout<< " 9.clause(2)  10.section(3a) 11.section(3b) 12.clause(3bis)\n";
          cout<< "13.clause(4)  14.clause(5)   15.clause(6)   16.clause(7)\n";
          cin >> choice;
          if(choice < 1 || choice > 16)
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_14::Clause_1(move(s)); break;
          case 2: Art_14::Clause_1(move(s));
                  Art_14::Section_1a(move(s)); break;
          case 3: Art_14::Clause_1(move(s));
                  Art_14::Section_1b(move(s)); break;
          case 4: Art_14::Clause_1(move(s));
                  Art_14::Section_1c(move(s)); break;
          case 5: Art_14::Clause_1(move(s));
                  Art_14::Section_1d(move(s)); break;
          case 6: Art_14::Clause_1(move(s));
                  Art_14::Section_1e(move(s)); break;
          case 7: Art_14::Clause_1(move(s));
                  Art_14::Section_1f(move(s)); break;
          case 8: Art_14::Clause_1(move(s));
                  Art_14::Section_1g(move(s)); break;
          case 9: Art_14::Clause_2(move(s)); break;
          case 10: Art_14::Section_3a(move(s)); break;
          case 11: Art_14::Section_3b(move(s)); break;
          case 12: Art_14::Clause_3bis(move(s)); break;
          case 13: Art_14::Clause_4(move(s)); break;
          case 14: Art_14::Clause_5(move(s)); break;
          case 15: Art_14::Clause_6(move(s)); break;
          case 16: Art_14::Clause_7(move(s)); break;
        }
      }

      else if(article == "15")
      {
        while(true)
        {
          cout<< "            ~ select menu ~\n";
          cout<< "1.clause(1) 2.section(2a) 3.section(2b)\n";
          cout<< "4.clause(3) 5.clause(4)   6.(.........)\n";
          cin >> choice;
          if(choice < 1 || choice > 5) //always check number when menu change
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_15::Clause_1(move(s)); break;
          case 2: Art_15::Section_2a(move(s)); break;
          case 3: Art_15::Section_2b(move(s)); break;
          case 4: Art_15::Clause_3(move(s)); break;
          case 5: Art_15::Clause_4(move(s)); break;
        }
      }

      else if(article == "16")
      {
        while(true)
        {
          cout<< "            ~ select menu ~\n";
          cout<< "1.clause(1)   2.clause(2).  3.section(3a)\n";
          cout<< "4.section(3b) 5.section(3c) 6.section(3d)\n";
          cin >> choice;
          if(choice < 1 || choice > 6)
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_16::Clause_1(move(s)); break;
          case 2: Art_16::Clause_2(move(s)); break;
          case 3: Art_16::Section_3a(move(s)); break;
          case 4: Art_16::Section_3b(move(s)); break;
          case 5: Art_16::Section_3c(move(s)); break;
          case 6: Art_16::Section_3d(move(s)); break;
        }
      }

      else if(article == "17")
      {
        while(true)
        {
          cout<< "            ~ select menu ~\n";
          cout<< "1.clause(1)   2.clause(2)   3.clause(3)\n";
          cout<< "4.clause(4)   5.section(4a) 6.section(4b)\n";
          cout<< "7.section(4c) 8.section(4d) 9.clause(5)\n";
          cin >> choice;
          if(choice < 1 || choice > 9)
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }

        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_17::Clause_1(move(s)); break;
          case 2: Art_17::Clause_2(move(s)); break;
          case 3: Art_17::Clause_3(move(s)); break;
          case 4: Art_17::Clause_4(move(s)); break;
          case 5: Art_17::Section_4a(move(s)); break;
          case 6: Art_17::Section_4b(move(s)); break;
          case 7: Art_17::Section_4c(move(s)); break;
          case 8: Art_17::Section_4d(move(s)); break;
          case 9: Art_17::Clause_5(move(s)); break;
        }
      }

      else if(article == "18")
      {
        while(true)
        {
          cout<< "   ~ select menu ~\n";
          cout<< "1.clause(1) 2.clause(2)\n";
          cin >> choice;
          if(choice < 1 || choice > 2)
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_18::Clause_1(move(s)); break;
          case 2: Art_18::Clause_2(move(s)); break;
        }
      }

      else if(article == "19")
      {
        while(true)
        {
          cout<< "                         ~ select menu ~\n";
          cout<< " 1.clause(1)     2.section(2a)   3.paragraph(i)  4.paragraph(ii)\n";
          cout<< " 5.section(2b)   6.section(2c)   7.section(2d)   8.section(2e)\n";
          cout<< " 9.section(2f)  10.section(2g)  11.section(2h)  12.section(2i)\n";
          cout<< "13.clause(3)    14.section(3a)  15.section(3b)  16.clause(4)\n";
          cout<< "17.clause(5)    18.clause(6)    19.clause(7)    20.clause(8)\n";
          cout<< "21.clause(9)    22.clause(10)   23.clause(11)   24.clause(12)\n";
          cout<< "25.clause(13)   26.clause(14)   27.clause(15)   28.section(15a)\n";
          cout<< "29.section(15b) 30.clause(16)   31.section(16a) 32.section(16b)\n";
          cout<< "33.section(17a) 34.section(17b) 35.section(17c) 36.clause(18)\n";
          cout<< "37.clause(19)   38.clause(20)   39.clause(21)   40.(.........)\n";
          cin >> choice;
          if(choice < 1 || choice > 39)
          {
            cout<< "~ re-select menu ~\n";
            cin >> choice;
          }
            break;
        }
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch(choice)
        {
          case 1: Art_19::Clause_1(move(s)); break;
          case 2: Art_19::Section_2a(move(s)); break;
          case 3: Art_19::Paragraph_i(move(s)); break;
          case 4: Art_19::Paragraph_ii(move(s)); break;
          case 5: Art_19::Section_2b(move(s)); break;
          case 6: Art_19::Section_2c(move(s)); break;
          case 7: Art_19::Section_2d(move(s)); break;
          case 8: Art_19::Section_2e(move(s)); break;
          case 9: Art_19::Section_2f(move(s)); break;
          case 10: Art_19::Section_2g(move(s)); break;
          case 11: Art_19::Section_2h(move(s)); break;
          case 12: Art_19::Section_2i(move(s)); break;
          case 13: Art_19::Clause_3(move(s)); break;

          case 14: Art_19::Clause_3(move(s)); 
                   Art_19::Section_3a(move(s)); break;
          case 15: Art_19::Clause_3(move(s));
                   Art_19::Section_3b(move(s)); break;
          case 16: Art_19::Clause_4(move(s)); break;
          case 17: Art_19::Clause_5(move(s)); break;
          case 18: Art_19::Clause_6(move(s)); break;
          case 19: Art_19::Clause_7(move(s)); break;
          case 20: Art_19::Clause_8(move(s)); break;
          case 21: Art_19::Clause_9(move(s)); break;
          case 22: Art_19::Clause_10(move(s)); break;
          case 23: Art_19::Clause_11(move(s)); break;
          case 24: Art_19::Clause_12(move(s)); break;
          case 25: Art_19::Clause_13(move(s)); break;
          case 26: Art_19::Clause_14(move(s)); break;
          case 27: Art_19::Clause_15(move(s)); break;
          case 28: Art_19::Section_15a(move(s)); break;
          case 29: Art_19::Section_15b(move(s)); break;
          case 30: Art_19::Clause_16(move(s)); break;
          case 31: Art_19::Section_16a(move(s)); break;
          case 32: Art_19::Section_16b(move(s)); break;
          case 33: Art_19::Section_17a(move(s)); break;
          case 34: Art_19::Section_17b(move(s)); break;
          case 35: Art_19::Section_17c(move(s)); break;
          case 36: Art_19::Clause_18(move(s)); break;
          case 37: Art_19::Clause_19(move(s)); break;
          case 38: Art_19::Clause_20(move(s)); break;
          case 39: Art_19::Clause_21(move(s)); break;
        }
      }








 




    }
}








