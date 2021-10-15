#include "../include/calc.h"
#include <iostream>
#include <string>
#include <cstring>
#include <experimental/string_view>

using namespace std;

void zakonczProgram() {
    cout<<endl<<"Nacisnij dowolny przycisk, aby zakonczyc dzialanie programu...";
    getchar();
}

int add (int a, int b) {
    return a+b;
}

int subtract (int a, int b) {
    return a-b;
}

float volume (int a, int b, int h, int H_prism) {
    return (((a+b)*h)/2)*H_prism;
}

void help() {
        cout<<"Prosty kalkulator, obsluguje dodawanie, odejmowanie oraz liczenie objetosci graniastoslupa prostego o podstawie trapezu"<<endl;
        cout<<"simpleCalc [funkcja] [a] [b] [h] [H]"<<endl<<endl;
        cout<<"add [a] [b]\t\t\tDodaje dwie liczby calkowite [a] i [b], zwraca wynik"<<endl;
        cout<<"subtract [a] [b]\t\tOdejmuje liczbe calkowita [a] od liczby calkowitej [b], zwraca wynik"<<endl;
        cout<<"volume [a] [b] [h] [H]\t\tOblicza objetosc graniastoslupa prostego o podstawie trapezu, jego wymiary to [a], [b] oraz [h], wysokosc graniastoslupa to [H], zwraca wynik"<<endl;
        cout<<"help\t\t\t\tPokazuje pomoc do programu";
}