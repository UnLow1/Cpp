#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include "person.h"

Person RandomPerson() { return Person(); }

int main() {
    srand(time(NULL));
    vector<Person> tab;

    tab.push_back(Person());
    tab.push_back(Person());
    tab.push_back(Person());

    std::set<Person> set;
    std::set<Person>::iterator it;
    std::map<string, Person> map;
    std::map<string, Person>::iterator it_map;

    vector<Person>::iterator it_tab = tab.begin();
    for (; it_tab != tab.end(); it_tab++) {
        cout << *it_tab << endl;
        set.insert(*it_tab);
        map[it_tab->get_key()] = *it_tab;
    }

    cout << endl << "TESTING SET" << endl;
    for (it = set.begin(); it != set.end(); ++it)
        cout << *it << endl;

    cout << endl << "TESTING MAP" << endl;
    for (it_map = map.begin(); it_map != map.end(); ++it_map)
        cout << it_map->second << endl;

    cout << endl << "TESTING ALGORITHM LIBRARY" << endl;
    std::vector<Person> myvector(20);
    std::generate(myvector.begin(), myvector.end(), RandomPerson);

    std::cout << "myvector contains:\n";
    std::vector<Person>::iterator it3;
    for (it3 = myvector.begin(); it3 != myvector.end(); ++it3)
        std::cout << *it3 << endl;

    std::vector<Person>::iterator tmp;
    it3 = find(tmp, myvector.end(), tmp->getBirthday() == 2000);
    if (it3 != myvector.end())
        std::cout << "Element found in myvector: " << *it << '\n';
    else
        std::cout << "Element not found in myvector\n";

    return 0;
}
