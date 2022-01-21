#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Note.h"
#include "ListNote.h"
#include "TextNote.h"
#include "mainFunctions.h"

enum functions {
    EXIT = 0,
    PRINT_NOTE = 1,
    ADD_NOTE = 2,
    EDIT_NOTE = 3,
    DELETE_NOTE = 4,
};

template <typename T>
T sum(T x, T y) {
    return x+y;
}

int main(int argc, char *argv[]) {
    int number, number2;
    string textContent, title, fileName;
    vector<string> listContent;
    functions menu;
    vector<Note*> notes;
    vector<string> loadedLines;
    vector<vector<string>> loadedNotes;

    if(argc>1) {
        string arg1 = "help";
        string arg2 = argv[1];

        if(arg1.compare(arg2)==0) {
            cout<<"Pomoc do menedzera notatek.\n";
            cout<<"Program ma 4 funkcje - tworzenie notatek o 2 typach (lista i tekst), wypisanie tresci danej notatki, usuniecie oraz edycja. Program zapisuje notatki w pliku .txt o podanej przez uzytkownika nazwie.\n";
            cout<<"Jesli chcesz wywolac pomoc do programu, uzyj argumentu help.\n";
            cout<<"Program posiada takze 3 inne argumenty - errorHandler (przyklad na obsluge bledow w jezyku C++), templateExample (przykladowe zastosowanie szablonu) oraz overloadExample (przykladowe zastosowanie przeladowania operatora).\n";
            pause();
            return 0;
        }

        arg1 = "errorHandler";
        if(arg1.compare(arg2)==0) {

            string liczba;
            try {
                cout<<"Wprowadz liczbe: ";
                cin>>liczba;

                cout<<"Twoja liczba: "<<stoi(liczba)<<endl;

            } catch (const invalid_argument& exception) {
                cout<<"Wprowadziles tekst a nie liczbe:-( Funkcja "<<exception.what()<<" wyrzucila blad invalid_argument.\n";
                return 1;
            }

            cout<<"Gratulacje! Wprowadziles liczbe i program sie nie wysypal:-).";
            pause();
            return 0;
        }

        arg1="templateExample";
        if(arg1.compare(arg2)==0) {
            cout<<sum<int>(1,3)<<" = wynik sumy liczb calkowitych 1 oraz 3."<<endl;
            cout<<sum<double>(1.23,3.21)<<" = wynik sumy ulamkow 1.23 oraz 3.21."<<endl;
            pause();
            return 0;
        }

        arg1="overloadExample";
        if(arg1.compare(arg2)==0) {
            TextNote overloadExample("Testowa notatka", "Ta notatka jest przykladem na dzialajace przeladowanie operatora <<.\n");
            cout<<overloadExample;
            pause();
            return 0;
        }
    }

    cout<<"Witaj w menedzerze notatek!\n";

    cout<<"Podaj nazwe pliku, z ktorego chcesz korzystac: ";
    cin>>fileName;
    fileName+=".txt";

    fstream file;
    file.open(fileName, ios::in);

    int numberOfLines=0;
    vector<int> wordAmount;
    string line;

    while(getline(file, line)) {
        ++numberOfLines;
        loadedLines.push_back(line);
    }

    file.close();

    loadedNotes.resize(numberOfLines);
    wordAmount.resize(numberOfLines);

    for(int i=0; i<numberOfLines; i++) {
        wordAmount[i]=0;

        for(int j=0; j<loadedLines[i].length(); j++) {
            if(loadedLines[i][j]==';') wordAmount[i]++;
        }
        loadedNotes[i].resize(wordAmount[i]);
    }

    string word="";
    int k;

    for(int i=0; i<numberOfLines; i++) {
        k=0;
        for(int j=0; j<loadedLines[i].length(); j++) {
            if(loadedLines[i][j]==';') {
                loadedNotes[i][k]=word;
                word="";
                k++;
            }
            else word+=loadedLines[i][j];
        }
    }

    int noteType;

    for(int i=0; i<loadedNotes.size(); i++) {
        noteType = stoi(loadedNotes[i][0]);
        if(noteType==1) notes.push_back(new TextNote(loadedNotes[i][1], loadedNotes[i][2]));
        else if(noteType==2) {
            vector<string> wordList;

            for(int j=2; j<loadedNotes[i].size(); j++) wordList.push_back(loadedNotes[i][j]);

            notes.push_back(new ListNote(loadedNotes[i][1], wordList));
        }
    }

    cout<<"Pomyslnie wczytano notatki!"<<endl;

    do {
        cout<<endl<<"Lista notatek: "<<endl;
        for(int i=0; i<notes.size(); i++) cout<<i<<" - "<<notes[i]->getTitle()<<endl;

        cout<<endl<<"0 - wyjscie oraz zapis"<<endl;
        cout<<"1 - wyswietlenie zawartosci notatki"<<endl;
        cout<<"2 - utworzenie nowej notatki"<<endl;
        cout<<"3 - edycja notatki"<<endl;
        cout<<"4 - usuniecie notatki"<<endl;

        cinNewInt(reinterpret_cast<int &>(menu), 0, 5);

        if(menu == PRINT_NOTE && notes.size()>0) {
            cout<<"Podaj numer notatki do wyswietlenia: ";
            cinNewInt(number, 0, notes.size());

            cout<<"Typ: "<<notes[number]->getType()<<endl;
            cout<<"Tytul: "<<notes[number]->getTitle()<<endl;
            notes[number]->printContent();
        }

        else if(menu == ADD_NOTE) {
            cout<<"Podaj typ notatki:"<<endl;
            cout<<"1 - notatka tekstowa"<<endl;
            cout<<"2 - notatka listowa"<<endl;

            cinNewInt(number, 1, 2);
            cin.clear();
            cin.ignore(10000, '\n');

            cout<<"Podaj tytul notatki: ";
            getline(cin, title);

            if(number==1) {
                notes.push_back(new TextNote(title));
                notes[notes.size()-1]->setContent();
            }

            else if(number==2) {
                notes.push_back(new ListNote(title));
                notes[notes.size()-1]->setContent();
            }
        }

        else if(menu == EDIT_NOTE && notes.size()>0) {
            cout<<"Podaj numer notatki do edycji: ";
            cinNewInt(number, 0, notes.size());

            if(notes[number]->getType()==1)  {
                cin.clear();
                cin.ignore(10000, '\n');

                notes[number]->setContent();
            }

            else if(notes[number]->getType()==2) {
                cin.clear();
                cin.ignore(10000, '\n');

                cout<<"Chcesz usunac linie z notatki czy dodac nowe?"<<endl;
                cout<<"1 - dodaj nowe"<<endl;
                cout<<"2 - usun linie"<<endl;

                cinNewInt(number2, 1, 2);

                cin.clear();
                cin.ignore(10000, '\n');
                if(number2==1) notes[number]->setContent();
                else if(number2==2) notes[number]->removeContent();
            }
        }

        else if(menu == DELETE_NOTE && notes.size()>0) {
            cout<<"Podaj numer notatki do usuniecia: ";
            cinNewInt(number, 0, notes.size());

            notes.erase(notes.begin()+number);
        }

    } while(menu != EXIT);

    file.open(fileName, ios::out);

    int tempInt;
    string tempStringContent;
    vector<string> tempListContent;

    for(int i=0; i<notes.size(); i++) {
        tempInt = notes[i]->getType();

        if(tempInt==1) {
            file.put('1');
            file.put(';');

            tempStringContent = notes[i]->getTitle();
            for(int j=0; j<tempStringContent.length(); j++) file.put(tempStringContent[j]);
            file.put(';');

            tempStringContent = notes[i]->getContentT();
            for(int j=0; j<tempStringContent.length(); j++) file.put(tempStringContent[j]);
            file.put(';');
        }

        else if(tempInt==2) {
            file.put('2');
            file.put(';');

            tempStringContent = notes[i]->getTitle();
            for(int j=0; j<tempStringContent.length(); j++) file.put(tempStringContent[j]);
            file.put(';');

            tempListContent = notes[i]->getContentL();
            for(int j=0; j<tempListContent.size(); j++) {
                tempStringContent = tempListContent[j];
                for(int k=0; k<tempStringContent.length(); k++) file.put(tempStringContent[k]);
                file.put(';');
            }
        }

        file.put('\n');
    }

    file.close();

    cout<<"Pomyslnie zapisano notatki!"<<endl;

    pause();

    return 0;
}