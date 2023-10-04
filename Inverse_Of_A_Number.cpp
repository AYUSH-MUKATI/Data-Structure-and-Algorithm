#include <iostream>
using namespace std;

int calculateInverse(int number) {
    int inverse = 0;
    int position = 1;

    while (number > 0) {
        int digit = number % 10;
        int inversePosition = 1;

        for (int i = 1; i < digit; i++) {
            inversePosition *= 10;
        }

        inverse += position * inversePosition;
        number /= 10;
        position++;
    }

    return inverse;
}

int main() {
    int number;
    
    cin >> number;

    int inverse = calculateInverse(number);
    cout<< inverse <<endl;

    return 0;
}
