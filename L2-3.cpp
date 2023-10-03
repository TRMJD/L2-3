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