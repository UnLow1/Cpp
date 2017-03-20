#include <iostream>
#include <fstream>

using namespace std;

class Czas {
public:
    Czas() {
        h = 12;
        m = 0;
        s = 0;
    }

    Czas(int hour, int minute, int second);

    void wypisz();

    int godzina();

    void dodaj_sekunde();

    bool porownaj(Czas czas);

    virtual ~Czas();

    static int getSuma();

    void zapisz(ostream &os);

    void wczytaj(istream &is);

private:
    int h;
    int m;
    int s;
    static int suma;
};

int Czas::suma = 0;

void Czas::wczytaj(istream &is) {
    string input;
    is >> input;
    h = (input[0] - 48) * 10 + input[1] - 48;
    m = (input[3] - 48) * 10 + input[4] - 48;
    s = (input[6] - 48) * 10 + input[7] - 48;
}

void Czas::zapisz(ostream &os) {
    if (h < 10)
        os << "0";
    os << h << ":";
    if (m < 10)
        os << "0";
    os << m << ":";
    if (s < 10)
        os << "0";
    os << s << endl;
}

bool Czas::porownaj(Czas czas) {
    return h == czas.h && m == czas.m && s == czas.s;
}

void Czas::dodaj_sekunde() {
    s++;
    if (s == 60) {
        s = 0;
        m++;
        if (m == 60) {
            m = 0;
            h++;
            if (h == 24)
                h = 0;
        }
    }
}

int Czas::godzina() {
    return h;
}

Czas::~Czas() {
    cout << "Destructing time ";
    wypisz();
}

void Czas::wypisz() {
    cout << h << ":" << m << ":" << s << endl;
}

Czas::Czas(int hour, int minute, int second = 0) {
    if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60) {
        h = hour;
        m = minute;
        s = second;
    } else {
        h = 12;
        m = 0;
        s = 0;
    }
    suma += s;
}

int Czas::getSuma() {
    return suma;
}

int main() {
    Czas czas1;
    Czas czas2(11, 59, 59);
    czas1.wypisz();
    czas2.wypisz();

    cout << czas2.godzina() << endl;

    czas2.dodaj_sekunde();
    czas2.wypisz();

    cout << "Porownanie " << czas1.porownaj(czas2) << endl;

    cout << "statis suma = " << Czas::getSuma() << endl;

    ifstream infile;
    infile.open("dane.txt");

    Czas czas3 = Czas(3, 2, 2);
    czas3.wczytaj(infile);

    Czas czas4;
    czas4.wczytaj(infile);

    infile.close();

    ofstream outfile;
    outfile.open("wyniki.txt");

    czas1.zapisz(outfile);
    czas2.zapisz(outfile);
    czas3.zapisz(outfile);
    czas4.zapisz(outfile);

    outfile.close();

    cout << "statis suma = " << Czas::getSuma() << endl;

    return 0;
}
