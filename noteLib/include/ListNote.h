#ifndef MAIN_CPP_LISTNOTE_H
#define MAIN_CPP_LISTNOTE_H

#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
using namespace std;

class ListNote : public Note {
private:
    vector<string> content;
public:
    void getContent();
    void setContent(string text);
};

#endif //MAIN_CPP_LISTNOTE_H
