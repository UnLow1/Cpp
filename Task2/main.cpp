#include <iostream>
#include "objects.h"

using namespace std;

int main() {
    Vector vector1(1, 2, 3), vector2(9, 1, 4), vector3;
    cout << "\nvector1 = " << vector1 << "vector2 = " << vector2 << "vector3 = " << vector3 << endl;

    vector3 = vector1 + vector2;
    cout << "vector1 + vector2 = " << vector3;

    cout << "vector1 = " << vector1;

    vector1 += vector2;
    cout << "vector1 += vector2 = " << vector1;

    vector1 = vector1 * 2;
    cout << "vector1 * 2 = " << vector1;

    vector1 = 2 * vector1;
    cout << "2 * vector1 = " << vector1;

    vector2 = -vector1;
    cout << "-vector1 = " << vector2;

    if (vector1 > vector2)
        cout << "vector1 > vector2" << endl;

    if (vector1 > vector3)
        cout << "vector1 > vector3" << endl;

    cout << "vector1[0] = " << vector1[0] << "   vector1[1] = " << vector1[1] << "   vector1[2] = " << vector1[2]
         << endl;

    cout << vector3 << endl;
    float tmp = vector3;
    cout << tmp << endl;

    Point number1(3, 7, 10), number2(2, 5, 3), number3;
    cout << endl << "number1 = " << number1 << "number2 = " << number2 << "number3 = " << number3 << endl;

    number3 = number2 + vector1;
    cout << "number2 + vector1 = " << number3;

    ++number3;
    cout << "++number3 = " << number3;

    number3++;
    cout << "number3++ = " << number3;

    return 0;
}