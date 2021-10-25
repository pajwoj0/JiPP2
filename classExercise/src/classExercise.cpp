#include "classExercise.h"

double Prostopadloscian::pole() {
    return (2*(a*b))+(2*(a*h))+(2*(b*h));
}

double Prostopadloscian::objetosc() {
    return a*b*h;
}

void Prostopadloscian::wymiary() {
    cout<<"Aktualne wymiary: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"h: "<<h<<endl;
}