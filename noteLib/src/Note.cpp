#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
using namespace std;

string Note :: getTitle() {
    return title;
}

void Note :: setTitle(string title) {
    this->title=title;
}

vector<string> Note::getContent() {}

void Note::setContent(string text) {}

Note::~Note() {}
