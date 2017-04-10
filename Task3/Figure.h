#ifndef TASK3_FIGURE_H
#define TASK3_FIGURE_H

#include <ostream>
#include "Point.h"

class Figure {
private:
    Point *points;
    int size;
    int el_counter;
public:
    class IndexOutOfBoundException{};
    class FullFigureException{};
    int getEl_counter() const;

    Figure(int i = 3);

    Figure(const Figure &figure);

    virtual ~Figure();

    void AddToEnd(const Point point);

    void AddToStart(const Point point);

    Point *getPoints() const;

    Point &operator[](int index) const;

    Figure &operator=(const Figure &figure);

    friend std::ostream &operator<<(std::ostream &os, const Figure &figure);
};


#endif //TASK3_FIGURE_H
