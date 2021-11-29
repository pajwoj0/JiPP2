#include "include.h"
#include <string>
#include <vector>
using namespace std;

class ListNote : public Note {
private:
    vector<string> content;
public:
    void getContent();
    void setContent(string text);
};
