#include <iostream>
#include <iomanip> // Zaruri hai setw ke liye
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // 1. Left side ka margin (setw se manage)
        if (i > 0) cout << setw(i) << " "; 

        // 2. Pehla Star
        cout << "*";

        // 3. Beech ka gap (setw ka asli magic)
        if (i < n - 1) {
            int gap = 2 * (n - i - 1) - 1;
            cout << setw(gap + 1) << "*"; 
        }

        cout << endl;
    }

    return 0;
}