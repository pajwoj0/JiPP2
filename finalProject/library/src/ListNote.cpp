#include <iostream>
#include <vector>
#include <string>
#include "ListNote.h"
using namespace std;

ListNote :: ListNote(string title) {
    this->setType(2);
    this->setTitle(title);
}

ListNote::ListNote(string title, vector<string> content) {
    this->setType(2);
    this->setTitle(title);
    this->content=content;
}

void ListNote :: printContent() {
    cout<<"Tresc notatki: "<<endl;
    for(int i=0; i<content.size(); i++) cout<<i<<"\t"<<this->content[i]<<endl;
}

void ListNote :: setContent() {
    string text;
    cout<<"Wpisuj linie do notatki, '.' konczy wprowadzanie."<<endl;

    do {
        getline(cin, text);
        content.push_back(text);
    } while(text!=".");

    content.pop_back();
}

void ListNote::removeContent() {
    int removeLine;
    this->printContent();

    cout<<"Podaj numer linii do usuniecia: ";
    cinNewInt(removeLine, 0, this->content.size());

    content.erase(content.begin()+removeLine);
}

vector<string> ListNote::getContentL() {
    return content;
}

string ListNote::getContentT() {
    return std::string();
}
