#include "include.h"
#include <string>
#include <vector>
using namespace std;

class Note {
protected:
    string title;
public:
    void getTitle();
    void setTitle(string title);

    virtual void getContent();
    virtual void setContent();
};
