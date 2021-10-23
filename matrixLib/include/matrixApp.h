#ifndef MAIN_CPP_MATRIXAPP_H
#define MAIN_CPP_MATRIXAPP_H
/**
 * matrixApp - kalkulator macierzy, projekt na JiPP
 * @file matrixApp.h
 * @author Wojciech Pajtel
 * @version 0.1 22.10.2021
 */

/**
 * Funkcja wywolujaca blad.
 */
void error();

/**
 * Funkcja konczaca dzialanie programu.
 */
void exit();

/**
 * Funkcja wyswietlajaca menu pomocy.
 */
void help();

/**
 * Funkcja odpowiadajaca za wprowadzenie wartosci calkowitej z klawiatury, uzytkownik wpisuje wartosc dopoki nie jest ona wartoscia calkowita (int).
 * @param value Wartosc wpisywana przez uzytkownika.
 */
void cinNewInt(int &value);

/**
 * Wyswietla macierz w konsoli.
 * @param matrix Macierz do wyswietlenia.
 * @param rows Ilosc wierszy w macierzy do wyswietlenia.
 * @param cols Ilosc kolumn w macierzy do wyswietlenia.
 */
void printMatrix(int **matrix, int rows, int cols);

/**
 * Funkcja proszaca uzytkownika o wypelnienie macierzy wartosciami.
 * @param matrix Macierz do wyswietlenia.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 */
void fillMatrix(int **matrix, int rows, int cols);

/**
 * Dodaje dwie macierze, zwraca wynik.
 * @param matrixA Pierwsza macierz.
 * @param matrixB Druga macierz.
 * @param rows Ilosc wierszy w macierzach.
 * @param cols Ilosc kolumn w macierzach.
 * @return Wynik dodania macierzy matrixA oraz macierzy matrixB.
 */
int** addMatrix(int **matrixA, int **matrixB, int rows, int cols);

/**
 * Odejmuje druga macierz od pierwszej, zwraca wynik.
 * @param matrixA Pierwsza macierz.
 * @param matrixB Druga macierz.
 * @param rows Ilosc wierszy w macierzach.
 * @param cols Ilosc kolumn w macierzach.
 * @return Wynik odjecia macierzy matrixB od macierzy matrixA.
 */
int** subtractMatrix(int **matrixA, int **matrixB, int rows, int cols);

/**
 * Mnozy dwie macierze, zwraca wynik.
 * @param matrixA Pierwsza macierz.
 * @param matrixB Druga macierz.
 * @param aRows Ilosc wierszy w pierwszej macierzy.
 * @param aCols Ilosc kolumn w pierwszej macierzy.
 * @param bCols Ilosc kolumn w drugiej macierzy.
 * @return Wynik mnozenia macierzy matrixA oraz macierzy matrixB.
 */
int** multiplyMatrix(int **matrixA, int **matrixB, int aRows, int aCols, int bCols);

/**
 * Mnozy macierz przez skalar, zwraca wynik.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @param scalar Skalar.
 * @return Wynik mnozenia macierzy oraz skalara.
 */
int** multiplyByScalar(int **matrixA, int rows, int cols, int **scalar);

/**
 * Transponuje macierz (zamienia wiersze z kolumnami).
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @return Transponowana macierz.
 */
int** transpozeMatrix(int **matrixA, int rows, int cols);

/**
 * Podnosi macierz do potegi.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @param power Potega do ktorej podnosimy macierz, liczba >=0.
 * @return Wynik podniesienia macierzy do potegi.
 */
int** powerMatrix(int **matrixA, int rows, int cols, unsigned int power);

/**
 * Znajduje wyznacznik macierzy.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @return Wyznacznik macierzy.
 */
int determinantMatrix(int **matrixA, int rows, int cols);

/**
 * Sprawdza diagonalnosc macierzy.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @return true jesli macierz jest diagonalna, false jesli nie jest.
 */
bool matrixIsDiagonal(int **matrixA, int rows, int cols);

/**
 * Zamienia dwie zmienne miejscami.
 * @param a Pierwsza zmienna.
 * @param b Druga zmienna.
 */
void swap(int &a, int &b);

void sortRow(int *array, int cols);
void sortRowsInMatrix(int **matrixA, int rows, int cols);

/**
 * Funkcja odpowiadajaca za wprowadzenie wartosci zmiennoprzecinkowej z klawiatury, uzytkownik wpisuje wartosc dopoki nie jest ona wartoscia zmiennoprzecinkowa (double).
 * @param value Wartosc wpisywana przez uzytkownika.
 */
void cinNewDouble(double &value);

/**
 * Wyswietla macierz w konsoli.
 * @param matrix Macierz do wyswietlenia.
 * @param rows Ilosc wierszy w macierzy do wyswietlenia.
 * @param cols Ilosc kolumn w macierzy do wyswietlenia.
 */
void printMatrix(double **matrix, int rows, int cols);

/**
 * Funkcja proszaca uzytkownika o wypelnienie macierzy wartosciami.
 * @param matrix Macierz do wyswietlenia.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 */
void fillMatrix(double **matrix, int rows, int cols);

/**
 * Dodaje dwie macierze, zwraca wynik.
 * @param matrixA Pierwsza macierz.
 * @param matrixB Druga macierz.
 * @param rows Ilosc wierszy w macierzach.
 * @param cols Ilosc kolumn w macierzach.
 * @return Wynik dodania macierzy matrixA oraz macierzy matrixB.
 */
int** addMatrix(double **matrixA, double **matrixB, int rows, int cols);

/**
 * Odejmuje druga macierz od pierwszej, zwraca wynik.
 * @param matrixA Pierwsza macierz.
 * @param matrixB Druga macierz.
 * @param rows Ilosc wierszy w macierzach.
 * @param cols Ilosc kolumn w macierzach.
 * @return Wynik odjecia macierzy matrixB od macierzy matrixA.
 */
int** subtractMatrix(double **matrixA, double **matrixB, int rows, int cols);

/**
 * Mnozy dwie macierze, zwraca wynik.
 * @param matrixA Pierwsza macierz.
 * @param matrixB Druga macierz.
 * @param aRows Ilosc wierszy w pierwszej macierzy.
 * @param aCols Ilosc kolumn w pierwszej macierzy.
 * @param bCols Ilosc kolumn w drugiej macierzy.
 * @return Wynik mnozenia macierzy matrixA oraz macierzy matrixB.
 */
int** multiplyMatrix(double **matrixA, double **matrixB, int aRows, int aCols, int bCols);

/**
 * Mnozy macierz przez skalar, zwraca wynik.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @param scalar Skalar.
 * @return Wynik mnozenia macierzy oraz skalara.
 */
int** multiplyByScalar(double **matrixA, int rows, int cols, double **scalar);

/**
 * Transponuje macierz (zamienia wiersze z kolumnami).
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @return Transponowana macierz.
 */
int** transpozeMatrix(double **matrixA, int rows, int cols);

/**
 * Podnosi macierz do potegi.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @param power Potega do ktorej podnosimy macierz, liczba >=0.
 * @return Wynik podniesienia macierzy do potegi.
 */
int** powerMatrix(double **matrixA, int rows, int cols, unsigned int power);

/**
 * Znajduje wyznacznik macierzy.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @return Wyznacznik macierzy.
 */
int determinantMatrix(double **matrixA, int rows, int cols);

/**
 * Sprawdza diagonalnosc macierzy.
 * @param matrixA Macierz.
 * @param rows Ilosc wierszy w macierzy.
 * @param cols Ilosc kolumn w macierzy.
 * @return true jesli macierz jest diagonalna, false jesli nie jest.
 */
bool matrixIsDiagonal(double **matrixA, int rows, int cols);

/**
 * Zamienia dwie zmienne miejscami.
 * @param a Pierwsza zmienna.
 * @param b Druga zmienna.
 */
void swap(double &a, double &b);

void sortRow(double *array, int cols);
void sortRowsInMatrix(double **matrixA, int rows, int cols);

#endif //MAIN_CPP_MATRIXAPP_H
