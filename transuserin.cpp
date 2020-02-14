#include <iostream>
#include <string>
#include <cctype>
#include <clocale>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{

    // Take each letter from user input and in each case:

    // - Convert to upper case

    // - Change numbers to words
    // - Ignore any other (non-alpha) characters
    // - In each case, add result to a string variable
    // print out the new string
   //std::string Input;
    cout << "Type in:";
    //std::cin  >> Input;

    char in_char('x');
    string result;

    while (cin >> in_char)
    {
        // Loop until the user
        // presses Enter then Ctrl+D

        //if (in_char == -1 or in_char == 4) break;
        
        

        if (isalnum(in_char)) {
                       
            switch (in_char)

            {
            case '0':
                result = "ZERO";
                break;

            case '1':
                result = "ONE";
                break;

            case '2':
                result = "TWO";
                break;

            case '3':
                result = "THREE";
                break;

            case '4':
                result = "FOUR";
                break;

            case '5':
                result = "FIVE";
                break;

            case '6':
                result = "SIX";
                break;

            case '7':
                result = "SEVEN";
                break;

            case '8':
                result = "EIGHT";
                break;

            case '9':
                result = "NINE";

            default:
                if (isalpha(in_char)) {
                    result = toupper(in_char);
                }
            }


            //  }

        }
        else{
            //result = _getch();
            //result = "Non-alphanumeric characters detected.Ignored";
			//result = "";
			goto L99;
        }
        //cout << result<< endl;
		cout << result;
	L99 :;	
    }


    return 0;

}