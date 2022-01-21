#ifndef MAIN_CPP_TEXTNOTE_H
#define MAIN_CPP_TEXTNOTE_H

#include <iostream>
#include <vector>
#include <string>
#include "Note.h"
#include "mainFunctions.h"
using namespace std;

/**
 * textNote - klasa notatki tekstowej
 * @file TextNote.h
 * @author Wojciech Pajtel
 * @version 1.0 21.01.2022
 */

class TextNote : public Note {
private:
    string content;

public:
    /**
     * Konstruktor tworzacy notatke tekstowa z tytulu oraz pusta trescia.
     * @param title Tytul notatki, string.
     */
    TextNote(string title);

    /**
     * Konstruktor tworzacy notatke tekstowa z tytulu oraz wektora zawierajacego tresc.
     * @param title Tytul notatki, string.
     * @param content Tresc notatki, string.
     */
    TextNote(string title, string content);

    /**
     * Przeladowanie operatora << dla notatek tekstowych.
     * @param output Strumien wyjsciowy.
     * @param note Notatka tekstowa.
     * @return Tresc notatki tekstowej.
     */
    friend ostream &operator<<(ostream &output, const TextNote &note);

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
     * Funkcja odpowiadajaca za pobranie tresci notatki tekstowej.
     * @return Tresc danej notatki tekstowej, string.
     */
    string getContentT();

    /**
     * Funkcja odpowiadajaca za pobranie tresci notatki listowej - konieczna jest jej pusta implementacja w tym pliku, nie jest uzywana.
     */
    vector<string> getContentL();
};

#endif //MAIN_CPP_TEXTNOTE_H
