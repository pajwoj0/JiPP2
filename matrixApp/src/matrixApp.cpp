#include <iostream>
#include "matrixApp.h"
#include <string>
#include <experimental/string_view>
using namespace std;

int main(int argc, char **argv) {
    if(experimental::string_view(argv[1]) == "addMatrix") {
        int rows, cols;

        cout<<"Podaj ilosc wierszy obu macierzy: ";
        cinNewInt(rows);

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        cinNewInt(cols);

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        int** matrixB = new int*[rows];
        for(int i=0; i<rows; i++) matrixB[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        cout<<"Macierz B:"<<endl;
        fillMatrix(matrixB, rows, cols);

        int** result = new int*[rows];
        for(int i=0; i<rows; i++) result[i] = new int[cols];

        cout<<endl<<"Macierz wynikowa:"<<endl;
        printMatrix(addMatrix(matrixA, matrixB, rows, cols), rows, cols);
        exit();
    }

    if(experimental::string_view(argv[1]) == "subtractMatrix") {
        int rows, cols;

        cout<<"Podaj ilosc wierszy obu macierzy: ";
        cinNewInt(rows);

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        cinNewInt(cols);

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        int** matrixB = new int*[rows];
        for(int i=0; i<rows; i++) matrixB[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        cout<<"Macierz B:"<<endl;
        fillMatrix(matrixB, rows, cols);

        int** result = new int*[rows];
        for(int i=0; i<rows; i++) result[i] = new int[cols];

        cout<<endl<<"Macierz wynikowa"<<endl;
        printMatrix(subtractMatrix(matrixA, matrixB, rows, cols), rows, cols);
        exit();
    }

    if(experimental::string_view(argv[1]) == "help") help();

    return 0;
}