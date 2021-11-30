#ifndef MAIN_CPP_TEXTNOTE_H
#define MAIN_CPP_TEXTNOTE_H

#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
using namespace std;

class TextNote : public Note {
private:
    string content;
public:
    void getContent();
    void setContent(string text);
};

#endif //MAIN_CPP_TEXTNOTE_H
