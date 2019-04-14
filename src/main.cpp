/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Number sorter>
 * @app desc: <A program that ascendingly sort six numbers from the user.>
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

    int n[6];

    //Get user input
    for (int i = 0; i < 6; i++) {
        cout << "Enter a number[" << i +1 << "]: ";
        cin >> n[i];
    }

    cout << endl;

    // Sort

    for (int i = 0; i < 6; i++) {
            for (int t = 0; t < 6; t++) {
                if (n[i] < n[t]) {
                    int temp = n[i];
                    n[i] = n[t];
                    n[t] = temp;
                }
            }
    }

    // Display back to the user
    cout << "The sorted numbers in ascending order:" << endl;
    
    for (int i = 0; i < 6; i++) {
        cout << n[i] << endl;
    }
    cin.ignore();


    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
