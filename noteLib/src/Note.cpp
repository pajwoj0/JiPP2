#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
using namespace std;

void Note :: getTitle() {
    cout<<title;
}

void Note :: setTitle(string title) {
    this->title=title;
}

void Note::getContent() {}

void Note::setContent(string text) {}

Note::~Note() {}
