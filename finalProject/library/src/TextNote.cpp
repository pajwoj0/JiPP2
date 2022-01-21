#include <iostream>
#include <vector>
#include <string>
#include "TextNote.h"
using namespace std;

TextNote :: TextNote(string title) {
    this->setType(1);
    this->setTitle(title);
}

TextNote::TextNote(string title, string content) {
    this->setType(1);
    this->setTitle(title);
    this->content=content;
}

ostream &operator<<(ostream &output, const TextNote& note) {
    output<<"Tresc notatki: "<<note.content<<endl;
    return output;
}

void TextNote :: printContent() {
    cout<<"Tresc notatki: "<<content<<endl;
}

void TextNote :: setContent() {
    string content;

    cout<<"Podaj tresc notatki: ";
    getline(cin, content);

    this->content=content;
}

void TextNote::removeContent() {
    this->content="";
}

string TextNote::getContentT() {
    return content;
}

vector<string> TextNote::getContentL() {
    return vector<string>();
}
