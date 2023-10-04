#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Print upper half
    for (int i = n; i >= 1; i--) {
        // Print left side
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        // Print middle space
        if (i < n) {
            for (int j = 1; j <= 2 * (n - i) - 1; j++) {
                cout << " ";
            }
        }
        // Print right side
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Print lower half
    for (int i = 2; i <= n; i++) {
        // Print left side
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        // Print middle space
        if (i < n) {
            for (int j = 1; j <= 2 * (n - i) - 1; j++) {
                cout << " ";
            }
        }
        // Print right side
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
