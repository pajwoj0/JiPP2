#ifndef PROJECT_MYFIRSTCLASS_H
#define PROJECT_MYFIRSTCLASS_H

#include <iostream>
using namespace std;

class myFirstClass {
private:
    string firstName;
    string lastName;

    string question;
    string answer;

    short points;

    void readAnswer();
public:
    void printQuestion();
    void askUser();
    string getQuestion();
    void setPoints(short points);
    myFirstClass(string firstName, string lastName, string question, string answer, short points);

    void printData();
};


#endif //PROJECT_MYFIRSTCLASS_H
