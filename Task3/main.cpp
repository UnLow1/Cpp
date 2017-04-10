#include <iostream>
#include "Point.h"
#include "Figure.h"

using namespace std;

int main() {
    Point A, B(3.43, 8.9), C(1, 2);
    cout << "A = " << A << endl << "B = " << B << endl << "C = " << C << endl;

    Figure figure1;
    try {
        figure1.AddToEnd(A);
        figure1.AddToEnd(C);
        cout << "figure1: " << figure1 << endl;

        Figure figure2(figure1);
        cout << "COPY CONSTRUCTOR" << endl;
        cout << "figure2: " << figure2 << endl;

        cout << "ADDING TO END" << endl;
        figure2.AddToEnd(B);
        cout << "figure2: " << figure2 << endl;


        Figure figure3;
        figure3 = figure1;
        cout << "USING OPERATOR =" << endl;
        cout << "figure3: " << figure3 << endl;

        cout << "ADDING TO START" << endl;
        Point D(31, 13);
        figure3.AddToStart(D);
        cout << "figure3: " << figure3 << endl;

        figure3[2] = D;
        cout << figure3 << endl;
    }
    catch (Figure::FullFigureException) {
        cout << "Figure is full already" << endl;
    }
    catch (Figure::IndexOutOfBoundException) {
        cout << "Bad index" << endl;
    }

    return 0;
}