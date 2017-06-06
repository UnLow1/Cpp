#include <cstdlib>
#include <time.h>
#include "person.h"

Person::Person() {
    string first_names[] = {"Adam", "Aleksander", "Wieslaw", "Zenon"};
    string last_names[] = {"Bak", "Wrona", "Sroka"};

    first_name = first_names[rand() % first_names->size()];
    last_name = last_names[rand() % last_names->size()];
    birthday = (rand() % 61) + 1950;
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "first_name: " << person.first_name << "\tlast_name: " << person.last_name << "\tbirthday: "
       << person.birthday;
    return os;
}

bool Person::compare(Person other) const {
    return last_name + first_name == other.last_name + other.first_name;
}

string Person::get_key() {
    return last_name + first_name;
}

int Person::getBirthday() const {
    return birthday;
}
