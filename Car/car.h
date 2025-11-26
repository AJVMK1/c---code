#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        Car(string m, string mo, int y);
        void setMake(string m);
        string getMake(); 
        void setModel(string m);
        string getModel();
        void setYear(int y);
        int getYear();

    private:
        string make;
        string model;
        int year;
};