/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Five numbers>
 * @app desc: <A program that will accept five (5) integers and display them to the users.>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    int userInput[5];

    cout << "Kindly enter five numbers: " << endl;

    for ( int i = 0; i < 5; i++){
        cout << i + 1 << ".";
        cin >> userInput[i];
    }

    cout << "The numbers you entered are: " << endl
         << "\t1. " << userInput[0] << endl
         << "\t2. " << userInput[1] << endl
         << "\t3. " << userInput[2] << endl
         << "\t4. " << userInput[3] << endl
         << "\t5. " << userInput[4] << endl
         << endl;

    cin.ignore();

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
