#include "include.h"
#include <string>
#include <vector>
using namespace std;

void ListNote :: getContent() {
    int i = content.size;
    for(int j=0; j<i; j++) cout<<content[j]<<endl;
}

void ListNote :: setContent(string text) {
    content.insert(text);
}
