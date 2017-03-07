#include <iostream>
#include <fstream>
using namespace std;

class Car {
public:
    Car() {name = "noname";power = -1;vin = -2;cout<<"constructor is running"<<endl;}
    Car(const string &name, int vin) : name(name), vin(vin) {power = 7;cout<<"constructor is running"<<endl;}
    void wypisz();
    void zapisz(ostream& os) {os << "NAME: " << name << " POWER: " << power << " VIN: " << vin << endl;};
    void wczytaj(istream& is) {is >> name >> power >> vin;};

    virtual ~Car();

private:
    string name;
    int power;
    int vin;
};

void Car::wypisz() {
    cout<<"NAME: " << name << " POWER: " << power << " VIN: " << vin << endl;
}

Car::~Car() {
    cout << name << " destructor is running" << endl;
}

int main() {
    Car car1 = Car();
    car1.wypisz();
    Car car2 = Car("car_name",1542);
    car2.wypisz();

    ofstream outfile;
    string filename = "wyniki.txt";
    outfile.open (filename.c_str(), ios::out|ios::binary);

    ifstream infile;
    filename = "dane.txt";
    infile.open (filename.c_str(), ios::in|ios::binary);

    Car car3;
    car3.wczytaj(infile);
    car3.zapisz(outfile);


    return 0;
}