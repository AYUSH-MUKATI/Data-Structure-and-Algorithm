#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    int N1,N2;
    
    while (true) {
        cin >> ch;

        if (ch == 'X' || ch == 'x') {
            break;
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            cin >> N1 >> N2;
            switch (ch) {
                case '+':
                    cout << N1 + N2 << endl;
                    break;
                case '-':
                    cout << N1 - N2 << endl;
                    break;
                case '*':
                    cout << N1 * N2 << endl;
                    break;
                case '/':
                    cout << N1 / N2 << endl;
                    break;
                case '%':
                    cout << N1 % N2 << endl;
                    break;
            }
        } else {
            cout << "Invalid operation. Try again." << endl;
        }
    }


}
