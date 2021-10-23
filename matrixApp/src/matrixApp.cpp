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
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

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
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "subtractMatrix") {
        int rows, cols;

        cout<<"Podaj ilosc wierszy obu macierzy: ";
        cinNewInt(rows);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

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
        printMatrix(subtractMatrix(matrixA, matrixB, rows, cols), rows, cols);
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "multiplyMatrix") {
        int aRows, aCols, bCols, bRows;

        cout<<"Podaj ilosc wierszy pierwszej macierzy: ";
        cinNewInt(aRows);
        while(aRows<=0) {
            if(aRows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(aRows);
        }

        cout<<"Podaj ilosc kolumn pierwszej macierzy: ";
        cinNewInt(aCols);
        while(aCols<=0) {
            if(aCols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(aCols);
        }

        cout<<"Podaj ilosc wierszy drugiej macierzy: ";
        cinNewInt(bRows);
        while(bRows<=0) {
            if(bRows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(bRows);
        }

        cout<<"Podaj ilosc kolumn drugiej macierzy: ";
        cinNewInt(bCols);
        while(bCols<=0) {
            if(bCols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(bCols);
        }

        if(aRows!=bCols) {
            getchar();
            error();
            return 1;
        }

        int** matrixA = new int*[aRows];
        for(int i=0; i<aRows; i++) matrixA[i] = new int[aCols];

        int** matrixB = new int*[bRows];
        for(int i=0; i<bRows; i++) matrixB[i] = new int[bCols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, aRows, aCols);

        cout<<"Macierz B:"<<endl;
        fillMatrix(matrixB, bRows, bCols);

        int** result = new int*[aRows];
        for(int i=0; i<aRows; i++) result[i] = new int[bCols];

        cout<<endl<<"Macierz wynikowa:"<<endl;
        printMatrix(multiplyMatrix(matrixA, matrixB, aRows, aCols, bCols), aRows, bCols);
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "multiplyByScalar") {
        int rows, cols, scalar;

        cout<<"Podaj ilosc wierszy macierzy: ";
        cinNewInt(rows);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

        cout<<"Podaj skalar: ";
        cinNewInt(scalar);

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        int** result = new int*[rows];
        for(int i=0; i<rows; i++) result[i] = new int[cols];

        cout<<endl<<"Macierz wynikowa:"<<endl;
        printMatrix(multiplyByScalar(matrixA, rows, cols, scalar), rows, cols);
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "transpozeMatrix") {
        int rows, cols;

        cout<<"Podaj ilosc wierszy macierzy: ";
        cinNewInt(rows);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        int** result = new int*[cols];
        for(int i=0; i<cols; i++) result[i] = new int[rows];

        cout<<endl<<"Macierz wynikowa:"<<endl;
        printMatrix(transpozeMatrix(matrixA, rows, cols), cols, rows);
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "powerMatrix") {
        int rows, cols, power;

        cout<<"Podaj ilosc wierszy macierzy: ";
        cinNewInt(rows);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

        if(rows!=cols) {
            getchar();
            error();
            return 1;
        }

        cout<<"Podaj potege: ";
        cinNewInt(power);
        while(power<0) {
            if(power<0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(power);
        }

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        int** result = new int*[rows];
        for(int i=0; i<rows; i++) result[i] = new int[cols];

        cout<<endl<<"Macierz wynikowa:"<<endl;
        printMatrix(powerMatrix(matrixA, rows, cols, power), rows, cols);
        getchar();
        exit();
    }

    /* if(experimental::string_view(argv[1]) == "determinantMatrix") {
        int rows, cols;

        cout<<"Podaj ilosc wierszy macierzy: ";
        cinNewInt(rows);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        int result;
        result=determinantMatrix(matrixA, rows, cols);

        cout<<endl<<"Wyznacznik macierzy: "<<result;
        getchar();
        exit();
    } */

    if(experimental::string_view(argv[1]) == "matrixIsDiagonal") {
        int rows, cols;

        cout<<"Podaj ilosc wierszy macierzy: ";
        cinNewInt(rows);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        if(matrixIsDiagonal(matrixA, rows, cols)) cout<<"Macierz jest diagonalna.";
        if(!matrixIsDiagonal(matrixA, rows, cols)) cout<<"Macierz nie jest diagonalna.";
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "sortRow") {
        int cols;

        cout<<"Podaj ilosc elementow tablicy: ";
        cinNewInt(cols);
        while(cols<=0) {
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

        int *array=new int[cols];

        for(int i=0; i<cols; i++) {
            cout<<"Wartosc "<<i+1<<": ";
            cinNewInt(array[i]);
        }

        sortRow(array, cols);
        cout<<"Posortowana tablica: ";
        for(int i=0; i<cols; i++) cout<<array[i]<<"\t";
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "sortRowsInMatrix") {
        int rows, cols;

        cout<<"Podaj ilosc wierszy macierzy: ";
        cinNewInt(rows);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(rows);
        }

        cout<<"Podaj ilosc kolumn macierzy: ";
        cinNewInt(cols);
        while(rows<=0) {
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
            cinNewInt(cols);
        }

        int** matrixA = new int*[rows];
        for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

        cout<<"Macierz A:"<<endl;
        fillMatrix(matrixA, rows, cols);

        cout<<endl<<"Macierz wynikowa:"<<endl;
        printMatrix(sortRowsInMatrix(matrixA, rows, cols), rows, cols);
        getchar();
        exit();
    }

    if(experimental::string_view(argv[1]) == "help") help();

    return 0;
}