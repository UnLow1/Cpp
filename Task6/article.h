#ifndef TASK6_ARTICLE_H
#define TASK6_ARTICLE_H

#include <iostream>
#include <string.h>

using namespace std;

class article {
private:
    string name;
    int number;
    int year;
public:
    article();

    article(int year);

    friend ostream &operator<<(ostream &os, const article &article);

    bool compare(article other) const;

    bool operator<(const article &article) const {
        return !compare(article);
    }

    bool operator==(const article &article) const {
        return year == article.getYear();
    }

    string get_key() const;

    int getNumber() const;

    int getYear() const;
};

#endif //TASK6_ARTICLE_H
