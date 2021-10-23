#include <iostream>
#include "matrixApp.h"
using namespace std;

void error() {
    cout<<"Blad! Sprawdz skladnie. Nacisnij dowolny przycisk, aby pokazac pomoc..."<<endl;
    getchar();
    help();
    exit();
}

void exit() {
    cout<<endl<<"Nacisnij dowolny przycisk, aby zakonczyc dzialanie programu...";
    getchar();
}

void help() {
    int option;

    cout<<"Wybierz funkcje, do ktorej chcesz otrzymac pomoc."<<endl;
    cout<<"1 - addMatrix - dodawanie macierzy"<<endl;
    cout<<"2 - subtractMatrix - odejmowanie macierzy"<<endl;
    cout<<"3 - multiplyMatrix - mnozenie macierzy"<<endl;
    cout<<"4 - multiplyByScalar - mnozenie macierzy przez skalar"<<endl;
    cout<<"5 - transposeMatrix - transpozycja macierzy"<<endl;
    cout<<"6 - powerMatrix - potegowanie macierzy"<<endl;
    cout<<"7 - determinantMatrix - szukanie wyznacznika macierzy"<<endl;
    cout<<"8 - matrixIsDiagonal - sprawdzanie, czy macierz jest diagonalna"<<endl;
    cout<<"9 - swap - zamiana dwoch wartosci miejscami"<<endl;
    cout<<"10 - sortRow - sortowanie tablicy rosnaco"<<endl;
    cout<<"11 - sortRowsInMatrix - sortowanie wierszy w macierzy rosnaco"<<endl;

    cin>>option;

    switch(option) {
        case 1:
            cout<<endl;
            cout<<"1";
            break;

        case 2:
            cout<<endl;
            cout<<"2";
            break;

        case 3:
            cout<<endl;
            cout<<"3";
            break;

        case 4:
            cout<<endl;
            cout<<"4";
            break;

        case 5:
            cout<<endl;
            cout<<"5";
            break;

        case 6:
            cout<<endl;
            cout<<"6";
            break;

        case 7:
            cout<<endl;
            cout<<"7";
            break;

        case 8:
            cout<<endl;
            cout<<"8";
            break;

        case 9:
            cout<<endl;
            cout<<"9";
            break;

        case 10:
            cout<<endl;
            cout<<"10";
            break;

        case 11:
            cout<<endl;
            cout<<"11";
            break;

        default:
            cout<<endl;
            cout<<"Wprowadzono bledny numer - prosze sprobowac ponownie i wprowadzic poprawna opcje.";
            getchar();
            exit();
            break;
    }
}

//INT

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
            cin>>matrix[i][j];
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

void swap(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
}

//DOUBLE

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
            cin>>matrix[i][j];
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

int** subtractMatrix(int **matrixA, int **matrixB, int rows, int cols) {
    double** result = new double*[rows];
    for(int i=0; i<rows; i++) result[i] = new double[cols];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            result[i][j]=matrixA[i][j]-matrixB[i][j];

    return result;
}

void swap(double &a, double &b) {
    double temp=a;
    a=b;
    b=temp;
}