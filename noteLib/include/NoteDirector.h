#ifndef MAIN_CPP_NOTEDIRECTOR_H
#define MAIN_CPP_NOTEDIRECTOR_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NoteDirector {
private:
    vector<Note> notesList;
public:
    void printNote(int number);
    int getSize();
    void printNotes();
    void editTitle(int number, string text);
    void addNote(int type);
    void deleteNote(int number);
    void editNote(int number, string text);
    void clearNotesList();
};

#endif //MAIN_CPP_NOTEDIRECTOR_H
