//
//  CSCI14 Assignment#6.cpp
//  GuoDong Lu
//  W10754485

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int countwords( string words )
{
    int count;
    count = words . size();
    return count;
}

int  main()
{
    string englishletter[ 39 ] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q",
                                   "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8",
                                   "9", "0", "Stop", ",", "?" };
    string morsecode[ 39 ] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
                               "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--",
                               "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----",
                               ".-.-.-", "--..--", "..--.." };
    string words, morse, englishsentence, morsesentence;
    int choice, count = 0, arraysize = 39, n = 0, voidletter = 0, voidcode = 0;
    char again = 'y', blank = ' ';
    while( again == 'y' )
    {
        cout << "\n1 - Encode( Text to Morse )" << endl;
        cout << "2 - Decode( Morse Code to Text )" << endl;
        cout << "3 - Display the Morse Code" << endl;
        cout << "4 - Quit" << endl;
        cout << "Enter 1, 2, 3 or 4: ";
        cin >> choice;
        choice = abs( choice );
        cin . clear();
        cin . ignore( 200, '\n' );
        system( "cls" );
        while( choice == 0 || choice > 4 )
        {
            cout << "Enter 1, 2, 3 or 4: ";
            cin >> choice;
            choice = abs( choice );
            cin . clear();
            cin . ignore( 200, '\n' );
            system( "cls" );
        }
        switch ( choice )
        {
            case 1:
                cout << "\nEnter a string with multiple words to encode:" << endl;
                getline( cin, words );
                cout << "\nThe target string to be translated is: " << endl;
                cout << "\"" << words << "\"";
                count = countwords( words );
                cout << "\n\nNumber of characters in the string is: " << count << endl;
                for( int n = 0; n < count; n++ )
                {
                    words[ n ] = toupper( words [ n ] );
                    if( words[ n ] == ' ' )
                    {
                        morsesentence . append( "\n" );
                    }
                    if( words[ n ] != blank )
                    {
                        switch( words[ n ] )
                        {
                            case 'A':
                                morsesentence . append( morsecode[ 0 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'B':
                                morsesentence . append( morsecode[ 1 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'C':
                                morsesentence . append( morsecode[ 2 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'D':
                                morsesentence . append( morsecode[ 3 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'E':
                                morsesentence . append( morsecode[ 4 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'F':
                                morsesentence . append( morsecode[ 5 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'G':
                                morsesentence . append( morsecode[ 6 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'H':
                                morsesentence . append( morsecode[ 7 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'I':
                                morsesentence . append( morsecode[ 8 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'J':
                                morsesentence . append( morsecode[ 9 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'K':
                                morsesentence . append( morsecode[ 10 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'L':
                                morsesentence . append( morsecode[ 11 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'M':
                                morsesentence . append( morsecode[ 12 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'N':
                                morsesentence . append( morsecode[ 13 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'O':
                                morsesentence . append( morsecode[ 14 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'P':
                                morsesentence . append( morsecode[ 15 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'Q':
                                morsesentence . append( morsecode[ 16 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'R':
                                morsesentence . append( morsecode[ 17 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'S':
                                morsesentence . append( morsecode[ 18 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'T':
                                morsesentence . append( morsecode[ 19 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'U':
                                morsesentence . append( morsecode[ 20 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'V':
                                morsesentence . append( morsecode[ 21 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'W':
                                 morsesentence. append( morsecode[ 22 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'X':
                                morsesentence . append( morsecode[ 23 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'Y':
                                morsesentence . append( morsecode[ 24 ] );
                                morsesentence . append( "  " );
                                break;
                            case 'Z':
                                morsesentence . append( morsecode[ 25 ] );
                                morsesentence . append( "  " );
                                break;
                            case '1':
                                morsesentence . append( morsecode[ 26 ] );
                                morsesentence . append( "  " );
                                break;
                            case '2':
                                morsesentence. append( morsecode[ 27 ] );
                                morsesentence . append( "  " );
                                break;
                            case '3':
                                morsesentence . append( morsecode[ 28 ] );
                                morsesentence . append( "  " );
                                break;
                            case '4':
                                morsesentence . append( morsecode[ 29 ] );
                                morsesentence . append( "  " );
                                break;
                            case '5':
                                morsesentence . append( morsecode[ 30 ] );
                                morsesentence. append( "  " );
                                break;
                            case '6':
                                morsesentence . append( morsecode[ 31 ] );
                                morsesentence . append( "  " );
                                break;
                            case '7':
                                morsesentence . append( morsecode[ 32 ] );
                                morsesentence . append( "  " );
                                break;
                            case '8':
                                morsesentence . append( morsecode[ 33 ] );
                                morsesentence . append( "  " );
                                break;
                            case '9':
                               morsesentence . append( morsecode[ 34 ] );
                                morsesentence . append( "  " );
                                break;
                            case '0':
                                morsesentence . append( morsecode[ 35 ] );
                                morsesentence. append( "  " );
                                break;
                            case ',':
                                morsesentence . append( morsecode[ 37 ] );
                                morsesentence . append( "  " );
                                break;
                            case '?':
                                morsesentence . append( morsecode[ 38 ] );
                               morsesentence . append( "  " );
                                break;

                            default:
                                morsesentence . append( "?  " );
                                voidcode += 1;
                                break;
                        }

                    }

                }
                cout << "\nIn Morse the message is: " << endl;
                cout << morsesentence <<  "\n" << morsecode[ 36 ] << " (END of Message)" << endl;
                if( voidcode > 0 )
                {
                    cout << "There are " << voidcode << " invalid letter(s). " << endl;
                }
                morsesentence . erase();
                englishsentence . erase();
                count = 0;
                voidcode = 0;
                break;

            case 2:
                while( again == 'y' )
                {
                    cout << "\nEnter a morse code to decode:" << endl;
                    cin >> morse;
                    cin . clear();
                    cin . ignore( 200, '\n' );
                    system( "cls" );
                    if ( morse == morsecode[ 0 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 0 ] );
                        englishsentence . append( " " );

                    }
                    else if( morse == morsecode[ 1 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 1 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 2 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 2 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 3 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 3 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 4 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 4 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 5 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 5 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 6 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 6 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 7 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 7 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 8 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 8 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 9 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 9 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 10 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 10 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 11 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 11 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 12 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 12 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 13 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 13 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 14 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 14 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 15 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 15 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 16 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 16 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 17 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 17 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 18 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 18 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 19 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 19 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 20 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 20 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 21 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 21 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 22 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 22 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 23 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 23 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 24 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 24 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 25 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 25 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 26 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 26 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 27 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 27 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 28 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 28 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 29 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 29 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 30 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 30 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 31 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 31 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 32 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 32 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 33 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 33 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 34 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 34 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 35 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 35 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 36 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 36 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 37 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 37 ] );
                        englishsentence . append( " " );
                    }
                    else if( morse == morsecode[ 38 ] )
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( englishletter[ 38 ] );
                        englishsentence . append( " " );
                    }
                    else
                    {
                        morsesentence . append( morse );
                        morsesentence . append( " " );
                        englishsentence . append( "? " );
                        englishsentence . append( " " );
                        voidletter += 1;
                    }

                    cout << "\nContinue to type morsecode( Y or N ): ";
                    cin >> again;
                    cin . clear();
                    cin . ignore( 200, '\n' );
                    count++;
                    system( "cls" );
                }
                cout << "\nThe target Morsecode to be decode is: " << endl;
                cout << "\"" << morsesentence << "\"" << endl;
                cout << "\n" << "Number of morsecode is: " << count << endl;
                cout << "\nIn English the message is:" << endl;
                cout << englishsentence;
                cout << "\nStop(END of Message)" << endl;
                if( voidletter > 0 )
                {
                    cout << "\nThere are " << voidletter << " invalid code(s). " << endl;
                }
                morsesentence . erase();
                englishsentence . erase();
                voidletter = 0;
                count = 0;
                break;

            case 3:
                cout << "\nMorse Code is:" << endl;
                for( int count = 0; count < arraysize-3; count++ )
                {

                    cout << setw(3) << "\t" << "\"" << englishletter[ count ] << "\"" << setw( 5 ) << "\t" << morsecode[ count ] << setw(3) <<  "\t";
                    n++;
                    if( n == 3 )
                    {
                        cout << endl;
                        n = 0;
                    }
                }
                cout << setw(3) << "\t" << "\"" << englishletter[ 36 ] << "\"" << setw( 1 ) << "\t" << morsecode[ 36 ] << setw(3) << "\t";

                for( int count1 = arraysize - 2; count1 < arraysize; count1++ )
                {
                     cout << "\"" << englishletter[ count1 ] << "\"" << setw( 2 ) << "\t" << morsecode[ count1 ] << setw(3) <<  "\t";
                    n++;
                }

                break;

            case 4:
                cout << "\nThank you!" << endl;
                cout << "\nHit ANY Key to continue...." << endl;
                getch();
                break;

            default:
                cout << "error! ";
                break;

        }
        if( choice == 4 )
        {
            again = 'n';
        }
        else
        {
            cout << "\nRun again( Y or N ): ";
            cin >> again;
            cin . clear();
            cin . ignore();
            again = tolower( again );
            system( "cls" );
        }
    }
    return 0;
}
