#include "../include/calc.h"
#include <iostream>
#include <string>
#include <cstring>
#include <experimental/string_view>

using namespace std;

int main(int argc, char *argv[])
{

    if(experimental::string_view(argv[1]) == "add") {
        int a = stoi(argv[2]);
        int b = stoi(argv[3]);

        int solution = a+b;

        cout<<"Solution: "<<solution;
    }

    else if(experimental::string_view(argv[1]) == "subtract") {
        int a = stoi(argv[2]);
        int b = stoi(argv[3]);

        int solution = a-b;

        cout<<"Solution: "<<solution;
    }

    else if(experimental::string_view(argv[1]) == "volume") {
        int a = stoi(argv[2]);
        int b = stoi(argv[3]);
        int h = stoi(argv[4]);
        int H_prism = stoi(argv[5]);

        int solution = (((a+b)*h)/2) * H_prism;

        cout<<"Solution: "<<solution;
    }

    else if(experimental::string_view(argv[1]) == "help") {
        cout<<"Prosty kalkulator, obsluguje dodawanie, odejmowanie oraz liczenie objetosci graniastoslupa prostego o podstawie trapezu"<<endl;
        cout<<"simpleCalc [funkcja] [a] [b] [h] [H]"<<endl<<endl;
        cout<<"add [a] [b]\t\t\tDodaje dwie liczby calkowite [a] i [b], zwraca wynik"<<endl;
        cout<<"subtract [a] [b]\t\tOdejmuje liczbe calkowita [a] od liczby calkowitej [b], zwraca wynik"<<endl;
        cout<<"volume [a] [b] [h] [H]\t\tOblicza objetosc graniastoslupa prostego o podstawie trapezu, jego wymiary to [a], [b] oraz [h], wysokosc graniastoslupa to [H], zwraca wynik"<<endl;
        cout<<"help\t\t\t\tPokazuje pomoc do programu";
    }

    else {
        cout<<"Blad! Podano zle parametry. Nacisnij dowolny przycisk aby uzyskac pomoc.";
        getchar();
        cout<<"Prosty kalkulator, obsluguje dodawanie, odejmowanie oraz liczenie objetosci graniastoslupa prostego o podstawie trapezu"<<endl;
        cout<<"simpleCalc [funkcja] [a] [b] [h] [H]"<<endl<<endl;
        cout<<"add [a] [b]\t\t\tDodaje dwie liczby calkowite [a] i [b], zwraca wynik"<<endl;
        cout<<"subtract [a] [b]\t\tOdejmuje liczbe calkowita [a] od liczby calkowitej [b], zwraca wynik"<<endl;
        cout<<"volume [a] [b] [h] [H]\t\tOblicza objetosc graniastoslupa prostego o podstawie trapezu, jego wymiary to [a], [b] oraz [h], wysokosc graniastoslupa to [H], zwraca wynik"<<endl;
        cout<<"help\t\t\t\tPokazuje pomoc do programu";
    }
    return 0;
}