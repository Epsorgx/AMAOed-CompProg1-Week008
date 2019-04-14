/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Equilateral triangle>
 * @app desc: <A progrm that will display an equilateral triangle with a height depending on the user.>
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

    int height;
    char rowValue[] = {"ABCDEFGHIJ"};

    cout << "This program will draw a triangle for you!\n";
    cout << "Please enter a number from 1 to 10: ";
    cin >> height;

    while (height <=0 || height >10) {
        cout << endl <<"You entered an invalid number:" << endl;
        cout << "Please enter a valid number: ";
        cin >> height;
    }
    cout << "\n";
    cout << "-------------------------------\n\n";

    int row = 0;
    while (row < height) {
        int count = 0;
            while (count < height - row) {
                cout << " ";
                count++;
            }

            count = 0;
            while (count < 2 * row +1) {
                cout << rowValue[row];
                count++;
            }
            cout << endl;
            row++;
    }
  

    cin.ignore();
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
