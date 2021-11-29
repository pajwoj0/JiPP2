#include "include.h"
#include <string>
#include <vector>
using namespace std;

class NoteDirector {
private:
    vector<string> notesList;
public:
    void addNote();
    void deleteNote();
    void editNote();
    void clearNotesList();
};
