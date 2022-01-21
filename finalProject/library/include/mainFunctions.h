#ifndef JIPP_MAINFUNCTIONS_H
#define JIPP_MAINFUNCTIONS_H

/**
 * mainFunctions - pomocnicze funkcje do programu głównego
 * @file mainFunctions.h
 * @author Wojciech Pajtel
 * @version 1.0 21.01.2022
 */

/**
 * Funkcja sluzaca do wprowadzenia nowej zmiennej calkowitej.
 * @param value Zmienna, ktorej wartosc wprowadzamy.
 */
void cinNewInt(int &value);

/**
 * Funkcja sluzaca do wprowadzenia nowej zmiennej calkowitej, mniejszej od max.
 * @param value Zmienna, ktorej wartosc wprowadzamy.
 * @param max Wartosc, od ktorej zmienna ma byc mniejsza.
 */
void cinNewInt(int &value, int max);

/**
 * Funkcja sluzaca do wprowadzenia nowej zmiennej calkowitej, wiekszej od min, mniejszej od max.
 * @param value Zmienna, ktorej wartosc wprowadzamy.
 * @param min Wartosc, od ktorej zmienna ma byc wieksza.
 * @param max Wartosc, od ktorej zmienna ma byc mniejsza.
 */
void cinNewInt(int &value, int min, int max);

/**
 * Funkcja sluzaca do zatrzymania dzialania programu, dopoki uzytkownik nie nacisnie przycisku.
 */
void pause();

#endif //JIPP_MAINFUNCTIONS_H