#include "myFirstClass.h"

void myFirstClass::readAnswer() {
    cout<<"Wprowadz odpowiedz: ";
    cin>>answer;
}

void myFirstClass::printQuestion() {
    cout<<"Pytanie: "<<question<<endl;
}

void myFirstClass::askUser() {
    printQuestion();
    readAnswer();
}

myFirstClass::myFirstClass(string firstName, string lastName, string question, string answer, short points)
    :lastName(lastName), question(question), answer(answer), points(points) /* to samo co z this ale lepiej (?) */ {
    this->firstName=firstName;
}

string myFirstClass::getQuestion() {
    return question;
}

void myFirstClass::setPoints(short points) {
    this->points = points;
}

void myFirstClass::printData() {
    cout<<"firstName: "<<firstName<<endl;
    cout<<"lastName: "<<lastName<<endl;
    cout<<"question: "<<question<<endl;
    cout<<"answer: "<<answer<<endl;
    cout<<"points: "<<points<<endl;
}
