#include <iostream>
#include <string>
using namespace std;

#include "car.cpp"

int main() {

    Car car("Tesla", "Model S", 2022);
    cout << "My car is a: " << endl;
    cout << car.getMake() << " " << car.getModel() << " " << car.getYear() << endl;
    car.setMake("Toyota");
    car.setModel("Corolla");
    car.setYear(2020);
    cout << "\nMy car has changed to a: " << endl;
    cout << car.getMake() << " " << car.getModel() << " " << car.getYear() << endl;

    return 0;
}