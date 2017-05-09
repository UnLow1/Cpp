#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Circle.h"
#include "Ring.h"

int main() {
    Point P1(0, 0), P2(3, 3), P3(-3, 3);
    cout << P1 << P2 << P3 << endl;

    Figure fig1(P2, "Figura jeden");
    cout << fig1 << endl;

    Point mid(0, 1.5);

    Triangle tri1(mid, "triangle one", P1, P2, P3);
    cout << tri1;
    cout << "field = " << tri1.field() << endl;
    cout << "description = " << tri1.description() << endl << endl;

    Circle cir1(mid, "circle first", 2);
    cout << cir1 << endl;
    cout << "field = " << cir1.field() << endl;
    cout << "description = " << cir1.description() << endl << endl;

    Ring rin1(mid,"ring one",2,1);
    cout << rin1 << endl;

    return 0;
}