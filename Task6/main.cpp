#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include "article.h"

int index = 10;

int number;

article RandomArticle() { return article(index++); }

bool cmpNumber(article article) { return article.getNumber() == number; }

bool myfunction(article a, article b) { return (a.getYear() < b.getYear()); }

int main() {
    srand(time(NULL));
    vector<article> tab;
    tab.push_back(article());
    tab.push_back(article());
    tab.push_back(article());
    tab.push_back(article());
    tab.push_back(article());
    tab.push_back(article());
    std::set<article> set;
    std::set<article>::iterator it;
    std::map<string, article> map;
    std::map<string, article>::iterator it_map;
    vector<article>::iterator it_tab = tab.begin();
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
    std::vector<article> myvector(30);
    std::generate(myvector.begin(), myvector.end(), RandomArticle);
    std::cout << "myvector contains:\n";
    for (it_tab = myvector.begin(); it_tab != myvector.end(); ++it_tab)
        std::cout << *it_tab << endl;

    std::vector<article>::iterator tmp = myvector.begin();
    it_tab = find(tmp, myvector.end(), tmp->getYear() == 2000);
    if (it_tab != myvector.end())
        std::cout << "Element found in myvector: " << *it << '\n';
    else
        std::cout << "Element not found in myvector\n";

    int number, counter = 0;
    cin >> number;
    it_tab = myvector.begin();
    counter = count_if(it_tab, myvector.end(), cmpNumber);
    cout << "counter = " << counter << endl;

    std::sort(myvector.begin(), myvector.end(), myfunction);

    it_tab = std::unique(myvector.begin(), myvector.end());
    myvector.resize(std::distance(myvector.begin(), it_tab));


    return 0;
}
