#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
#include "ListNote.h"
#include "TextNote.h"
#include "NoteDirector.h"

int main() {
    int menu;
    int type;
    int number;
    string title;
    string text;

    cout<<"Witaj w programie obslugujacym notatki!"<<endl<<endl;
    NoteDirector notes;

    do {
        cout<<"0 - wyjscie"<<endl;
        cout<<"1 - wypisanie listy notatek"<<endl;
        cout<<"2 - wypisanie zawartosci notatki"<<endl;
        cout<<"3 - utworzenie nowej notatki"<<endl;
        cout<<"4 - usuniecie notatki"<<endl;
        cout<<"5 - edycja zawartosci notatki"<<endl;
        cout<<"6 - edycja tytulu notatki"<<endl;
        cout<<"7 - usuniecie wszystkich notatek"<<endl;

        cin>>menu;
        cin.clear();
        cin.ignore(10000, '\n');

        if(menu==1) {
            notes.printNotes();
            cout<<endl;
        }

        if(menu==2) {
            notes.printNotes();
            cout<<endl;

            cout<<"Podaj numer notatki do wyswietlenia: ";

            do {
                cin>>number;
                cin.clear();
                cin.ignore(10000, '\n');
            } while(number<0 || number>notes.getSize()-1);

            notes.printNote(number);
        }

        if(menu==3) {
            do {
                cout<<"1 - notatka tekstowa"<<endl;
                cout<<"2 - notatka listowa"<<endl;

                cin>>type;
                cin.clear();
                cin.ignore(10000, '\n');
            } while (type!=1 && type!=2);

            notes.addNote(type);

            cout<<"Podaj tytul: ";
            getline(cin, text);
            cin.clear();
            cin.ignore(10000, '\n');

            notes.editTitle(notes.getSize()-1, text);
        }

        if(menu==4) {
            notes.printNotes();
            cout<<endl;

            cout<<"Podaj numer notatki do usuniecia: ";

            do {
                cin>>number;
                cin.clear();
                cin.ignore(10000, '\n');
            } while(number<0 || number>notes.getSize()-1);

            notes.deleteNote(number);
        }

        if(menu==5) {
            notes.printNotes();
            cout<<endl;

            cout<<"Podaj numer notatki do edycji: ";

            do {
                cin>>number;
                cin.clear();
                cin.ignore(10000, '\n');
            } while(number<0 || number>notes.getSize()-1);

            cout<<"Wpisz tekst do dodania: ";
            getline(cin, text);
            cin.clear();
            cin.ignore(10000, '\n');

            notes.editNote(number, text);
        }

        if(menu==6) {
            notes.printNotes();
            cout<<endl;

            cout<<"Podaj numer notatki do edycji: ";

            do {
                cin>>number;
                cin.clear();
                cin.ignore(10000, '\n');
            } while(number<0 || number>notes.getSize()-1);

            cout<<"Podaj tytul: ";
            getline(cin, text);
            cin.clear();
            cin.ignore(10000, '\n');

            notes.editTitle(number, text);
        }

        if(menu==7) notes.clearNotesList();

    } while (menu!=0);

    return 0;
}