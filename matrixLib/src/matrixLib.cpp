#include <iostream>
#include "matrixApp.h"
#include <string>
#include <experimental/string_view>
using namespace std;

void error() {
    cout<<"Blad! Sprawdz skladnie. Nacisnij dowolny przycisk, aby pokazac pomoc..."<<endl;
    getchar();
    help();
}

void exit() {
    cout<<endl<<"Nacisnij dowolny przycisk, aby zakonczyc dzialanie programu...";
    getchar();
}

void help() {
    cout<<"matrixApp - kalkulator macierzy\n";
    cout<<"autor: Wojciech Pajtel\n";
    cout<<"Kalkulator obsluguje pare podstawowych dzialan na macierzach. Pamiec na macierze alokowana jest dynamicznie, uzytkownik sam wpisuje rozmiary oraz wartosci do macierzy.\n\n";

    int option;

    cout<<"Wybierz funkcje, do ktorej chcesz otrzymac pomoc.\n";
    cout<<"0 - wyjscie z pomocy, zakonczenie programu.\n";
    cout<<"1 - addMatrix - dodawanie macierzy\n";
    cout<<"2 - subtractMatrix - odejmowanie macierzy\n";
    cout<<"3 - multiplyMatrix - mnozenie macierzy\n";
    cout<<"4 - multiplyByScalar - mnozenie macierzy przez skalar\n";
    cout<<"5 - transpozeMatrix - transpozycja macierzy\n";
    cout<<"6 - powerMatrix - potegowanie macierzy\n";
    cout<<"7 - determinantMatrix - szukanie wyznacznika macierzy\n";
    cout<<"8 - matrixIsDiagonal - sprawdzanie, czy macierz jest diagonalna\n";
    cout<<"9 - swap - zamiana dwoch wartosci miejscami\n";
    cout<<"10 - sortRow - sortowanie tablicy rosnaco\n";
    cout<<"11 - sortRowsInMatrix - sortowanie wierszy w macierzy rosnaco\n";

    cin>>option;

    switch(option) {
        case 0:
            break;
        case 1:
            cout<<endl;
            cout<<"Dodaje dwie macierze, zwraca wynik.\n";
            cout<<"addMatrix [matrixA] [matrixB] [rows] [cols]\n";
            cout<<"matrixA - Pierwsza macierz.\n";
            cout<<"matrixB - Druga macierz.\n";
            cout<<"rows - Ilosc wierszy w macierzach.\n";
            cout<<"cols - Ilosc kolumn w macierzach.\n";
            cout<<"Zwraca wynik dodania macierzy matrixA oraz macierzy matrixB.\n";
            break;

        case 2:
            cout<<endl;
            cout<<"Odejmuje druga macierz od pierwszej, zwraca wynik.\n";
            cout<<"subtractMatrix [matrixA] [matrixB] [rows] [cols]\n";
            cout<<"matrixA - Pierwsza macierz.\n";
            cout<<"matrixB - Druga macierz.\n";
            cout<<"rows - Ilosc wierszy w macierzach.\n";
            cout<<"cols - Ilosc kolumn w macierzach.\n";
            cout<<"Zwraca wynik odjecia macierzy matrixB od macierzy matrixA.\n";
            break;

        case 3:
            cout<<endl;
            cout<<"Mnozy dwie macierze, zwraca wynik.\n";
            cout<<"UWAGA! Jezeli aRows nie jest rowne bCols, funkcja nie bedzie dzialac!\n";
            cout<<"multiplyMatrix [matrixA] [matrixB] [aRows] [aCols] [bCols]\n";
            cout<<"matrixA - Pierwsza macierz.\n";
            cout<<"matrixB - Druga macierz.\n";
            cout<<"aRows - Ilosc wierszy w pierwszej macierzy.\n";
            cout<<"aCols - Ilosc kolumn w pierwszej macierzy.\n";
            cout<<"bCols - Ilosc kolumn w drugiej macierzy.\n";
            cout<<"Zwraca wynik mnozenia macierzy matrixA oraz macierzy matrixB.\n";
            break;

        case 4:
            cout<<endl;
            cout<<"Mnozy macierz przez skalar, zwraca wynik.\n";
            cout<<"multiplyByScalar [matrixA] [rows] [cols] [scalar]\n";
            cout<<"matrixA - Macierz.\n";
            cout<<"rows - Ilosc wierszy w macierzy.\n";
            cout<<"cols - Ilosc kolumn w macierzy.\n";
            cout<<"scalar - Skalar.\n";
            cout<<"Zwraca wynik mnozenia macierzy oraz skalara.\n";
            break;

        case 5:
            cout<<endl;
            cout<<"Transponuje macierz (zamienia wiersze z kolumnami).\n";
            cout<<"transpozeMatrix [matrixA] [rows] [cols]\n";
            cout<<"matrixA - Nacierz.\n";
            cout<<"rows - Ilosc wierszy w macierzy.\n";
            cout<<"cols - Ilosc kolumn w macierzy.\n";
            cout<<"Zwraca transponowana macierz.\n";
            break;

        case 6:
            cout<<endl;
            cout<<"Podnosi macierz do potegi.\n";
            cout<<"UWAGA! Ilosc wierszy musi byc rowna ilosci kolumn.\n";
            cout<<"UWAGA! Potega to liczba calkowita wieksza lub rowna 0.\n";
            cout<<"powerMatrix [matrixA] [rows] [cols] [power]\n";
            cout<<"matrixA - Macierz.\n";
            cout<<"rows - Ilosc wierszy w macierzy.\n";
            cout<<"cols - Ilosc kolumn w macierzy.\n";
            cout<<"power - Potega do ktorej podnosimy macierz, liczba >=0.\n";
            cout<<"Zwraca wynik podniesienia macierzy do potegi.\n";
            break;

        case 7:
            cout<<endl;
            cout<<"Znajduje wyznacznik macierzy.\n";
            cout<<"determinantMatrix [matrixA] [rows] [cols]\n";
            cout<<"matrixA - Macierz.\n";
            cout<<"rows - Ilosc wierszy w macierzy.\n";
            cout<<"cols - Ilosc kolumn w macierzy.\n";
            cout<<"Zwraca wyznacznik macierzy.\n";
            break;

        case 8:
            cout<<endl;
            cout<<"Sprawdza diagonalnosc macierzy.\n";
            cout<<"matrixIsDiagonal [matrixA] [rows] [cols]\n";
            cout<<"matrixA - Macierz.\n";
            cout<<"rows - Ilosc wierszy w macierzy.\n";
            cout<<"cols - Ilosc kolumn w macierzy.\n";
            cout<<"Zwraca true jesli macierz jest diagonalna, false jesli nie jest.\n";
            break;

        case 9:
            cout<<endl;
            cout<<"Zamienia dwie zmienne miejscami.\n";
            cout<<"swap [a] [b]\n";
            cout<<"a - Pierwsza zmienna.\n";
            cout<<"b - Druga zmienna.\n";
            break;

        case 10:
            cout<<endl;
            cout<<"Sortuje rosnaco tablice, uzywa sortowania babelkowego.\n";
            cout<<"sortRow [array] [cols]\n";
            cout<<"array - Tablica do posortowania.\n";
            cout<<"cols - Ilosc wartosci w tablicy.\n";
            break;

        case 11:
            cout<<endl;
            cout<<"Sortuje rosnaco wszystkie wiersze w macierzy, uzywa sortRow.\n";
            cout<<"sortRowsInMatrix [matrixA] [rows] [cols]\n";
            cout<<"matrixA - Macierz.\n";
            cout<<"rows - Ilosc wierszy w macierzy.\n";
            cout<<"cols - Ilosc kolumn w macierzy.\n";
            break;

        default:
            cout<<endl;
            cout<<"Wprowadzono bledny numer - prosze sprobowac ponownie i wprowadzic poprawna opcje.";
            getchar();
            exit();
            break;
    }
    getchar();
    exit();
}

bool matrixTypeCheck() {
    string dataType;
        cout<<"Jakiego typu danych chcesz uzywac?"<<endl;
        cout<<"Wpisz 'double' dla liczb zmiennoprzecinkowych (ulamkow)."<<endl;
        cout<<"Wpisz 'int' dla liczb calkowitych: ";

        do {
            cin>>dataType;
            if(dataType!="double" && dataType!="int") cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(dataType!="double" && dataType!="int");

        cout<<endl;
        if(dataType=="double") return true;
        else return false;
}

//INT

void cinNewInt(int &value) {
    double temp;

    do {
        cin>>temp;
        if(!cin.good()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cin>>temp;
        }
    } while(!cin.good());

    value=(int)temp;
}

void printMatrix(int **matrix, int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void fillMatrix(int **matrix, int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout<<"Aktualnie wprowadzana wartosc: kolumna "<<j+1<<", wiersz "<<i+1<<": ";
            cinNewInt(matrix[i][j]);
        }
    }
}

int** addMatrix (int **matrixA, int **matrixB, int rows, int cols) {
    int** result = new int*[rows];
    for(int i=0; i<rows; i++) result[i] = new int[cols];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j]+matrixB[i][j];

    return result;
}

int** subtractMatrix(int **matrixA, int **matrixB, int rows, int cols) {
    int** result = new int*[rows];
    for(int i=0; i<rows; i++) result[i] = new int[cols];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j]-matrixB[i][j];

    return result;
}

int** multiplyMatrix(int **matrixA, int **matrixB, int aRows, int aCols, int bCols) {
    int** result = new int*[aRows];
    for(int i=0; i<aRows; i++) result[i] = new int[bCols];

    for(int i=0; i<aRows; i++)
        for(int j=0; j<bCols; j++)
            for(int k=0; k<aCols; k++) result[i][j] += matrixA[i][k] * matrixB[k][j];

    return result;
}

int** multiplyByScalar(int **matrixA, int rows, int cols, int scalar) {
    int** result = new int*[rows];
    for(int i=0; i<rows; i++) result[i] = new int[cols];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j]*scalar;

    return result;
}

int** transpozeMatrix(int **matrixA, int rows, int cols) {
    int** result = new int*[cols];
    for(int i=0; i<cols; i++) result[i] = new int[rows];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[j][i]=matrixA[i][j];

    return result;
}

int** powerMatrix(int **matrixA, int rows, int cols, int power) {
    int** result = new int*[cols];
    for(int i=0; i<cols; i++) result[i] = new int[rows];

    if(power==0) {
        for(int i=0; i<rows; i++)
            for(int j=0; j<cols; j++) {
                if(i==j) result[i][j]=1;
                else result[i][j]=0;
            }
    }

    else {
        for(int i=1; i<=power; i++) {
            if(i==1) {
                for(int i=0; i<rows; i++)
                    for(int j=0; j<cols; j++)
                        result[i][j]=matrixA[i][j];
            }

            else result=multiplyMatrix(result, matrixA, rows, cols, cols);
        }
    }

    return result;
}

bool matrixIsDiagonal(int **matrixA, int rows, int cols) {
    if(rows!=cols) return false;

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            if(i!=j && matrixA[i][j]!=0) return false;
    return true;
}

void sortRow(int *array, int cols) {
    for(int i=0; i<cols-1; i++)
        for(int j=0; j<cols-i-1; j++)
            if(array[j] > array[j+1]) swap(array[j], array[j+1]);
}

int** sortRowsInMatrix(int **matrixA, int rows, int cols) {
    int** result = new int*[cols];
    for(int i=0; i<cols; i++) result[i] = new int[rows];

    for(int i=0; i<rows; i++) sortRow(matrixA[i], cols);

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j];

    return result;
}

void swap(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
}

//DOUBLE

void cinNewDouble(double &value) {
    cin>>value;

    while(!cin.good()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        cin>>value;
    }
}

void printMatrix(double **matrix, int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void fillMatrix(double **matrix, int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout<<"Aktualnie wprowadzana wartosc: kolumna "<<j+1<<", wiersz "<<i+1<<": ";
            cinNewDouble(matrix[i][j]);
        }
    }
}

double** addMatrix (double **matrixA, double **matrixB, int rows, int cols) {
    double** result = new double*[rows];
    for(int i=0; i<rows; i++) result[i] = new double[cols];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j]+matrixB[i][j];

    return result;
}

double** subtractMatrix(double **matrixA, double **matrixB, int rows, int cols) {
    double** result = new double*[rows];
    for(int i=0; i<rows; i++) result[i] = new double[cols];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j]-matrixB[i][j];

    return result;
}

double** multiplyMatrix(double **matrixA, double **matrixB, int aRows, int aCols, int bCols) {
    double** result = new double*[aRows];
    for(int i=0; i<aRows; i++) result[i] = new double[bCols];

    for(int i=0; i<aRows; i++)
        for(int j=0; j<bCols; j++)
            for(int k=0; k<aCols; k++) result[i][j] += matrixA[i][k] * matrixB[k][j];

    return result;
}

double** multiplyByScalar(double **matrixA, int rows, int cols, double scalar) {
    double** result = new double*[rows];
    for(int i=0; i<rows; i++) result[i] = new double[cols];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j]*scalar;

    return result;
}

double** transpozeMatrix(double **matrixA, int rows, int cols) {
    double** result = new double*[cols];
    for(int i=0; i<cols; i++) result[i] = new double[rows];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[j][i]=matrixA[i][j];

    return result;
}

double** powerMatrix(double **matrixA, int rows, int cols, int power) {
    double** result = new double*[cols];
    for(int i=0; i<cols; i++) result[i] = new double[rows];

    if(power==0) {
        for(int i=0; i<rows; i++)
            for(int j=0; j<cols; j++) {
                if(i==j) result[i][j]=1;
                else result[i][j]=0;
            }
    }

    else {
        for(int i=1; i<=power; i++) {
            if(i==1) {
                for(int i=0; i<rows; i++)
                    for(int j=0; j<cols; j++)
                        result[i][j]=matrixA[i][j];
            }

            else result=multiplyMatrix(result, matrixA, rows, cols, cols);
        }
    }

    return result;
}

bool matrixIsDiagonal(double **matrixA, int rows, int cols) {
    if(rows!=cols) return false;

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            if(i!=j && matrixA[i][j]!=0) return false;
    return true;
}

void sortRow(double *array, int cols) {
    for(int i=0; i<cols-1; i++)
        for(int j=0; j<cols-i-1; j++)
            if(array[j] > array[j+1]) swap(array[j], array[j+1]);
}

double** sortRowsInMatrix(double **matrixA, int rows, int cols) {
    double** result = new double*[cols];
    for(int i=0; i<cols; i++) result[i] = new double[rows];

    for(int i=0; i<rows; i++) sortRow(matrixA[i], cols);

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j];

    return result;
}

void swap(double &a, double &b) {
    double temp=a;
    a=b;
    b=temp;
}