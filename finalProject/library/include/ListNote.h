#ifndef MAIN_CPP_LISTNOTE_H
#define MAIN_CPP_LISTNOTE_H

#include <iostream>
#include <vector>
#include <string>
#include "Note.h"
#include "mainFunctions.h"
using namespace std;

/**
 * listNote - klasa notatki listowej
 * @file ListNote.h
 * @author Wojciech Pajtel
 * @version 1.0 21.01.2022
 */

class ListNote : public Note {
private:
    vector<string> content;

public:
    /**
     * Konstruktor tworzacy notatke listowa z tytulu oraz pusta trescia.
     * @param title Tytul notatki, string.
     */
    ListNote(string title);

    /**
     * Konstruktor tworzacy notatke listowa z tytulu oraz wektora zawierajacego tresc.
     * @param title Tytul notatki, string.
     * @param content Tresc notatki, wektor stringow.
     */
    ListNote(string title, vector<string> content);

    /**
     * Funkcja wypisujaca tresc notatki na ekran.
     */
    void printContent();

    /**
     * Funkcja proszaca uzytkownika o podanie tresci notatki.
     */
    void setContent();

    /**
     * Funkcja odpowiadajaca za wyzerowanie tresci notatki.
     */
    void removeContent();

    /**
     * Funkcja odpowiadajaca za pobranie tresci notatki listowej.
     * @return Tresc danej notatki listowej, wektor stringow.
     */
    vector<string> getContentL();

    /**
     * Funkcja odpowiadajaca za pobranie tresci notatki tekstowej - konieczna jest jej pusta implementacja w tym pliku, nie jest uzywana.
     */
    string getContentT();
};

#endif //MAIN_CPP_LISTNOTE_H
