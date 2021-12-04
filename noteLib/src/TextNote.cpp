#include <iostream>
#include <string>
#include <vector>
#include "TextNote.h"
using namespace std;

void TextNote :: getContent() {
    cout<<content<<endl;
}

void TextNote :: setContent(string text) {
    this->content=text;
}
