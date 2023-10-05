/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
'* Program name    : L2-3                                              *
'*                                                                     *
'* Written by      : Clarence Defiesta, Kenjustin Yabut, Allen Dadia   *
'*                                                                     *
'* Purpose         : create a program that tests various inputs to     *
'*                   test a fuction while using Ackermann's function   *
'*                                                                     *
'*                                                                     *
'* Inputs          :                                                   *
'*                                                                     *
'* Outputs         :                                                   *
'* 					                                                   *
'* 					 									               *
'*                                                                     *
'* Calls           : No internal or external calls                     *
'*                                                                     *
'* Structure       : BEGIN                                             *
'*                        Straight line code no sub-processes          *
'*                   STOP                                              *
'*                        End of Program                               *
'*                                                                     *
'*---------------------------------------------------------------------*
'*                                                                     *
'* Collaboration: help from Professor Urrutia                          *
'*															           *
'*                                                                     *
'*---------------------------------------------------------------------*
'* Change Log:                                                         *
'*                         Revision                                    *
'*       Date    Changed  Rel Ver Mod Purpose                          *
'* 09/23/2023   cdefiest  000.001.000 Initial release of program       *
'* 09/24/2023   cdefiest  000.002.000                                  *
'* 09/25/2023   adadia    000.003.000                                  *
'* 09/26/2023   adadia    000.004.000 			                 	   *
'* 09/27/2023   kyabut    000.005.000                                  *
'* 09/28/2023   kyabut    000.006.000                                  *
'* 09/29/2023   kyabut    000.007.000                                  *
'* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
using namespace std;

// Function to calculate Ackermann's function
int ackermann(int m, int n, int& count) {
    // Base case 1
    if (m == 0) {
        count++;
        return n + 1;
    }
    // Base case 2
    else if (n == 0) {
        count++;
        return ackermann(m - 1, 1, count);
    }
    // Recursive case
    else {
        count++;
        return ackermann(m - 1, ackermann(m, n - 1, count), count);
    }
}

int main() {
    int m = 4;
    int n = 3;
    int count = 0;
    int result = ackermann(m, n, count);
    cout << "Ackermann(" << m << ", " << n << ") = " << result << endl;
    cout << "Function called recursively " << count << " times." << endl;

    // Reset the count for the next calculation
    count = 0;
    m = 3;
    n = 5;
    result = ackermann(m, n, count);
    cout << "Ackermann(" << m << ", " << n << ") = " << result << endl;
    cout << "Function called recursively " << count << " times." << endl;

    return 0;
}
