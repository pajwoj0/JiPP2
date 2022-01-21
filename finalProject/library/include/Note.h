#ifndef MAIN_CPP_NOTE_H
#define MAIN_CPP_NOTE_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * Note - klasa rodzic do notatek
 * @file Note.h
 * @author Wojciech Pajtel
 * @version 1.0 21.01.2022
 */

class Note {
private:
    string title;
    int type;

public:
    /**
     * Funkcja ustawiajaca typ notatki. 1=notatka tekstowa, 2=notatka listowa.
     * @param type Typ notatki.
     */
    void setType(int type);

    /**
     * Funkcja zwracajaca typ notatki.
     * @return Typ notatki, int.
     */
    int getType();

    /**
     * Funkcja zwracajaca tytul notatki.
     * @return Tytul notatki, string.
     */
    string getTitle();

    /**
     * Funkcja ustawiajaca tytul notatki.
     * @param title Tytul notatki.
     */
    void setTitle(string title);

    /**
     * Blok funkcji wirtualnych uzywanych w poszczegolnych typach notatek - nie maja ciala.
     */
    virtual string getContentT() = 0;
    virtual vector<string> getContentL() = 0;
    virtual void printContent() = 0;
    virtual void setContent() = 0;
    virtual void removeContent() = 0;

    virtual ~Note() = default;
};

#endif //MAIN_CPP_NOTE_H