#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
#include "ListNote.h"
#include "TextNote.h"
#include "NoteDirector.h"
using namespace std;

void NoteDirector::printNote(int number) {
    cout<<notesList[number].getTitle()<<endl;
    notesList[number].getContent();
}

int NoteDirector::getSize() {
    return notesList.size();
}

void NoteDirector::printNotes() {
    for(int i=0; i<notesList.size(); i++) {
        cout<<i<<" - "<<notesList[i].getTitle()<<endl;
    }
}

void NoteDirector::editTitle(int number, string text) {
    notesList[number].setTitle(text);
}

void NoteDirector::addNote(int type) {
    if(type==1) notesList.push_back(TextNote());
    if(type==2) notesList.push_back(ListNote());
}

void NoteDirector::deleteNote(int number) {
    for(int i=0; i<notesList.size(); i++) {
        if(i == number) notesList.erase(notesList.begin()+number);
    }
}

void NoteDirector::editNote(int number, string text) {
    notesList[number].setContent(text);
}

void NoteDirector::clearNotesList() {
    notesList.clear();
}