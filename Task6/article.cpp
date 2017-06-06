#include <cstdlib>
#include <time.h>
#include <string.h>
#include <sstream>
#include "article.h"

article::article() {
    string names[] = {"Potato", "Car", "Dog"};
    name = names[rand() % names->size()];
    number = rand() % 100 + 1;
    year = (rand() % 16) + 2000;
}

ostream &operator<<(ostream &os, const article &article) {
    os << "name: " << article.name << "\tnumber: " << article.number << "\tyear: "
       << article.year;
    return os;
}

bool article::compare(article other) const {
    ostringstream ss1, ss2;
    ss1 << year;
    ss2 << other.year;
    return name + ss1.str() == other.name + ss2.str();
}

string article::get_key() const{
    ostringstream ss;
    ss << year;
    return name + ss.str();
}

int article::getYear() const {
    return year;
}

article::article(int year) : year(year) {}

int article::getNumber() const {
    return number;
}
