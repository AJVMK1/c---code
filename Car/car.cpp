#include "car.h"

Car::Car(string m, string mo, int y) {
    make = m;
    model = mo;
    year = y;
}

void Car::setMake(string m){   
    make = m; 
}

string Car::getMake(){
    return make;
}

void Car::setModel(string m){ 
    model = m; 
}

string Car::getModel(){
    return model;
} 

void Car::setYear(int y) { 
    year = y;
}

int Car::getYear(){ 
    return year; 
}