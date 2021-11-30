#ifndef MAIN_CPP_NOTEDIRECTOR_H
#define MAIN_CPP_NOTEDIRECTOR_H

#include <iostream>
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

#endif //MAIN_CPP_NOTEDIRECTOR_H
