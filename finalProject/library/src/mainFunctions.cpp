#include "mainFunctions.h"
#include <iostream>

using namespace std;

void cinNewInt(int &value) {
    cin>>value;

    while(!cin.good()) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        cin>>value;
    }
}

void cinNewInt(int &value, int max) {
    cin>>value;

    while(!cin.good() || value>max) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        cin>>value;
    }
}

void cinNewInt(int &value, int min, int max) {
    cin>>value;

    while(!cin.good() || value>max || value<min) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        cin>>value;
    }
}

void pause() {
    cout<<"Nacisnij dowolny przycisk, aby zakonczyc dzialanie programu...";
    cin.clear();
    cin.ignore(10000, '\n');
    getchar();
}
