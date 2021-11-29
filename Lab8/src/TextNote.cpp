#include "include.h"
#include <string>
using namespace std;

void TextNote :: getContent() {
    cout<<content;
}

void TextNote :: setContent(string content) {
    this->content=content;
}
