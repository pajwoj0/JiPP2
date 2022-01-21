#include <iostream>
#include <vector>
#include <string>
#include "Note.h"
using namespace std;

void Note::setType(int type) {
    this->type = type;
}

int Note :: getType() {
    return type;
}

string Note :: getTitle() {
    return title;
}

void Note :: setTitle(string title) {
    this->title=title;
}