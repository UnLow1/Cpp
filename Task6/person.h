#ifndef TASK6_PERSON_H
#define TASK6_PERSON_H

#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
    string first_name;
    string last_name;
    int birthday;
public:
    Person();

    friend ostream &operator<<(ostream &os, const Person &person);

    bool compare(Person other) const;

    bool operator<(const Person &person) const {
        return !compare(person);
    }

    string get_key();

    int getBirthday() const;
};

#endif //TASK6_PERSON_H
