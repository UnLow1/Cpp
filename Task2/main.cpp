#include <iostream>
#include "objects.h"

using namespace std;

int main() {
    Complex number1(3, 7), number2(3, 7), number3(2, 5);
    cout << "number1 = " << number1 << "number2 = " << number2 << "number3 = " << number3;

    Complex resultOfAddition = number1 + number3;
    cout << "(number1 + number3) resultOfAdding = " << resultOfAddition;

    if (number1 == number2) {
        cout << "number1 == number2" << endl;
    }
    if (number1 != number2) {
        cout << "number1 != number2" << endl;
    }
    if (number1 == resultOfAddition) {
        cout << "number1 == resultOfAddition" << endl;
    }
    if (number1 != resultOfAddition) {
        cout << "number1 != resultOfAddition" << endl;
    }

    Complex resultOfSubstraction = number3 - number2;
    cout << "(number3 - number2) resultOfSubstraction = " << resultOfSubstraction;

    Complex negativeNumber2 = !number2;
    cout << "negativeNumber2 = " << negativeNumber2;

    cout << "number1 = " << number1 << "number2 = " << number2 << "number3 = " << number3;

    return 0;
}