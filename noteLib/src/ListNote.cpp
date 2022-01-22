#include <iostream>
#include <string>
#include <vector>
#include "ListNote.h"
using namespace std;

string ListNote :: getContent() {
    for(int i=0; i<content.size(); i++) cout<<content[i]<<endl;
}

void ListNote :: setContent(string text) {
    content.push_back(text);
}
