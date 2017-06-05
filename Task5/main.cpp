#include <iostream>
#include <cmath>
#include <cstring>
#include "tree.h"

#define epsilon 0.0000001


template<class Type>
bool equal(Type a, Type b, Type c) {
    return abs(a - b < epsilon) && abs(a - c < epsilon);
}

bool equal(const char *a, const char *b, const char *c) {
    return strcmp(a, b) == 0 && strcmp(a, c) == 0;
}

int main() {
    cout << "equal(1, 1, 1) = " << equal(1, 1, 1) << endl << "equal(1, 0, 1) = " << equal(1, 0, 1) << endl
         << "equal(1.2, 1.2, 1.2) = " << equal(1.2, 1.2, 1.2) << endl
         << "equal(\"abe\", \"abe\", \"abe\") = " << equal("abe", "abe", "abe") << endl
         << "equal(\"a\", \"as\", \"a\") = " << equal("a", "as", "a") << endl;

    TreeBST<double> tree;

    try {
        tree.insert(3.2);
    }
    catch (string exc) {
        cout << "exception: " << exc << endl;
    }
    try {
        tree.insert(9.2);
    }
    catch (string exc) {
        cout << "exception: " << exc << endl;
    }
    try {
        tree.insert(0);
    }
    catch (string exc) {
        cout << "exception: " << exc << endl;
    }
    try {
        tree.insert(9);
    }
    catch (string exc) {
        cout << "exception: " << exc << endl;
    }
    try {
        tree.insert(0.2);
    }
    catch (string exc) {
        cout << "exception: " << exc << endl;
    }

    tree.print();
    cout << "tree.contains(9) = " << tree.contains(9) << endl << "tree.contains(0.2) = " << tree.contains(0.2) << endl
         << "tree.contains(2) = " << tree.contains(2) << endl;

    cout << tree << endl;


    return 0;
}
