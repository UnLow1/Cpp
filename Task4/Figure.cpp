#include "Figure.h"

Figure::Figure(const Point &middle, const string &name) : middle(middle), name(name) {}

Figure::~Figure() {

}

void Figure::setName(const string &name) {
    Figure::name = name;
}

string Figure::description() {
//    return std::__cxx11::string();
}

float Figure::field() {
//    return 0;
}

ostream &operator<<(ostream &os, const Figure &figure) {
    os << "name: " << figure.name << std::endl << "middle: " << figure.middle;
    return os;
}
