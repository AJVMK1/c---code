#include <iostream>
#include <string>
using namespace std;

#include "car.cpp"

void PrintMake(Car cars[], int size);
void SetCarInfo(string make, string model, int year, Car cars[], int size);

int main() {

 Car cars[3] = {
        Car("Tesla", "Model S", 2022),
        Car("Ford", "Mustang", 2018),
        Car("Honda", "Civic", 2019)
    };

    cout << "Original Makes:" << endl;
    PrintMake(cars, 3);

    SetCarInfo("Toyota", "Corolla", 2020, cars, 3);

    cout << "New Makes: " << endl;
    PrintMake(cars, 3);

    return 0;
}

void PrintMake(Car cars[], int size) {
    for (int i = 0; i < size; i++) {
        cout << cars[i].getMake() << endl;
    }
}

void SetCarInfo(string make, string model, int year, Car cars[], int size) {
    for (int i = 0; i < size; i++) {
        cars[i].setMake(make);
        cars[i].setModel(model);
        cars[i].setYear(year);
    }
}