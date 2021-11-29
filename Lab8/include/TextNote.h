#include "include.h"
#include <string>
using namespace std;

class TextNote : public Note {
private:
    string content;
public:
    void getContent();
    void setContent(string content);
};
