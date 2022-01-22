#ifndef MAIN_CPP_NOTE_H
#define MAIN_CPP_NOTE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Note {
private:
    string title;
public:
    string getTitle();
    void setTitle(string title);

    virtual vector<string> getContent();
    virtual void setContent(string text);

    virtual ~Note();
};

#endif //MAIN_CPP_NOTE_H
