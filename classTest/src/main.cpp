#include <iostream>
#include "myFirstClass.h"
using namespace std;

int main() {
    myFirstClass q1("Jan", "Kowalski", "Pytanie", "Odpowiedz", 0);

    q1.printData();
    q1.getQuestion();
    q1.setPoints(2);
    q1.askUser();
    q1.printData();
    return 0;
}