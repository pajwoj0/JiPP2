#include <iostream>
#include <string>
#include <experimental/string_view>
#include "matrixApp.h"
using namespace std;

int main(int argc, char **argv) {
    if(experimental::string_view(argv[1]) == "addMatrix") {
        int rows, cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy obu macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);
        cout<<endl;

        if(makeMatrixDouble) {
            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double** matrixB = new double*[rows];
            for(int i=0; i<rows; i++) matrixB[i] = new double[cols];

            double** result = new double*[rows];
            for(int i=0; i<rows; i++) result[i] = new double[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<"Macierz B:"<<endl;
            fillMatrix(matrixB, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(addMatrix(matrixA, matrixB, rows, cols), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] matrixB[i];
            delete[] matrixB;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int **matrixA = new int *[rows];
            for (int i = 0; i < rows; i++) matrixA[i] = new int[cols];

            int **matrixB = new int *[rows];
            for (int i = 0; i < rows; i++) matrixB[i] = new int[cols];

            int **result = new int *[rows];
            for (int i = 0; i < rows; i++) result[i] = new int[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<"Macierz B:"<<endl;
            fillMatrix(matrixB, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(addMatrix(matrixA, matrixB, rows, cols), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] matrixB[i];
            delete[] matrixB;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "subtractMatrix") {
        int rows, cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy obu macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);
        cout<<endl;

        if(makeMatrixDouble) {
            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double** matrixB = new double*[rows];
            for(int i=0; i<rows; i++) matrixB[i] = new double[cols];

            double** result = new double*[rows];
            for(int i=0; i<rows; i++) result[i] = new double[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<"Macierz B:"<<endl;
            fillMatrix(matrixB, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(subtractMatrix(matrixA, matrixB, rows, cols), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] matrixB[i];
            delete[] matrixB;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int **matrixA = new int *[rows];
            for (int i = 0; i < rows; i++) matrixA[i] = new int[cols];

            int **matrixB = new int *[rows];
            for (int i = 0; i < rows; i++) matrixB[i] = new int[cols];

            int **result = new int *[rows];
            for (int i = 0; i < rows; i++) result[i] = new int[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<"Macierz B:"<<endl;
            fillMatrix(matrixB, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(subtractMatrix(matrixA, matrixB, rows, cols), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] matrixB[i];
            delete[] matrixB;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "multiplyMatrix") {
        int aRows, aCols, bCols, bRows;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy pierwszej macierzy: ";
        do {
            cinNewInt(aRows);
            if(aRows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(aRows<=0);

        cout<<"Podaj ilosc kolumn pierwszej macierzy: ";
        do {
            cinNewInt(aCols);
            if(aCols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(aCols<=0);

        cout<<"Podaj ilosc wierszy drugiej macierzy: ";
        do {
            cinNewInt(bRows);
            if(bRows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(bRows<=0);

        cout<<"Podaj ilosc kolumn drugiej macierzy: ";
        do {
            cinNewInt(bCols);
            if(bCols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(bCols<=0);
        cout<<endl;

        if(aRows!=bCols) {
            getchar();
            error();
            return 1;
        }

        if(makeMatrixDouble) {
            double** matrixA = new double*[aRows];
            for(int i=0; i<aRows; i++) matrixA[i] = new double[aCols];

            double** matrixB = new double*[bRows];
            for(int i=0; i<bRows; i++) matrixB[i] = new double[bCols];

            double** result = new double*[aRows];
            for(int i=0; i<aRows; i++) result[i] = new double[bCols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, aRows, aCols);

            cout<<"Macierz B:"<<endl;
            fillMatrix(matrixB, bRows, bCols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(multiplyMatrix(matrixA, matrixB, aRows, aCols, bCols), aRows, bCols);
            getchar();

            for(int i=0; i<aRows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<bRows; i++) delete[] matrixB[i];
            delete[] matrixB;

            for(int i=0; i<aRows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int** matrixA = new int*[aRows];
            for(int i=0; i<aRows; i++) matrixA[i] = new int[aCols];

            int** matrixB = new int*[bRows];
            for(int i=0; i<bRows; i++) matrixB[i] = new int[bCols];

            int** result = new int*[aRows];
            for(int i=0; i<aRows; i++) result[i] = new int[bCols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, aRows, aCols);

            cout<<"Macierz B:"<<endl;
            fillMatrix(matrixB, bRows, bCols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(multiplyMatrix(matrixA, matrixB, aRows, aCols, bCols), aRows, bCols);
            getchar();

            for(int i=0; i<aRows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<bRows; i++) delete[] matrixB[i];
            delete[] matrixB;

            for(int i=0; i<aRows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "multiplyByScalar") {
        int rows, cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);

        if(makeMatrixDouble) {
            double scalar;
            cout<<"Podaj skalar: ";
            cinNewDouble(scalar);
            cout<<endl;

            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double** result = new double*[rows];
            for(int i=0; i<rows; i++) result[i] = new double[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(multiplyByScalar(matrixA, rows, cols, scalar), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int scalar;
            cout<<"Podaj skalar: ";
            cinNewInt(scalar);
            cout<<endl;

            int** matrixA = new int*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

            int** result = new int*[rows];
            for(int i=0; i<rows; i++) result[i] = new int[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(multiplyByScalar(matrixA, rows, cols, scalar), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "transpozeMatrix") {
        int rows, cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);
        cout<<endl;

        if(makeMatrixDouble) {
            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double** result = new double*[rows];
            for(int i=0; i<rows; i++) result[i] = new double[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(transpozeMatrix(matrixA, rows, cols), cols, rows);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int** matrixA = new int*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

            int** result = new int*[rows];
            for(int i=0; i<rows; i++) result[i] = new int[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(transpozeMatrix(matrixA, rows, cols), cols, rows);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "powerMatrix") {
        int rows, cols, power;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);

        if(rows!=cols) {
            getchar();
            error();
            return 1;
        }

        cout<<"Podaj potege: ";
        do {
            cinNewInt(power);
            if(power<0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(power<0);
        cout<<endl;

        if(makeMatrixDouble) {
            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double** result = new double*[rows];
            for(int i=0; i<rows; i++) result[i] = new double[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(powerMatrix(matrixA, rows, cols, power), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int** matrixA = new int*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

            int** result = new int*[rows];
            for(int i=0; i<rows; i++) result[i] = new int[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(powerMatrix(matrixA, rows, cols, power), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "determinantMatrix") {
        int rows, cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);
        cout<<endl;

        if(rows!=cols) {
            getchar();
            error();
            return 1;
        }

        if(makeMatrixDouble) {
            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double result;

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz:"<<endl;
            printMatrix(matrixA, rows, cols);

            result=determinantMatrix(matrixA, rows, cols);
            cout<<"Wyznacznik macierzy: "<<result;
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            exit();
        }

        else {
            int** matrixA = new int*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

            int result;

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz:"<<endl;
            printMatrix(matrixA, rows, cols);

            result=determinantMatrix(matrixA, rows, cols);
            cout<<"Wyznacznik macierzy: "<<result;
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "matrixIsDiagonal") {
        int rows, cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy obu macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);
        cout<<endl;

        if(makeMatrixDouble) {
            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double** result = new double*[rows];
            for(int i=0; i<rows; i++) result[i] = new double[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz:"<<endl;
            printMatrix(matrixA, rows, cols);
            if(matrixIsDiagonal(matrixA, rows, cols)) cout<<"Macierz jest diagonalna.";
            if(!matrixIsDiagonal(matrixA, rows, cols)) cout<<"Macierz nie jest diagonalna.";
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int** matrixA = new int*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

            int** result = new int*[rows];
            for(int i=0; i<rows; i++) result[i] = new int[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz:"<<endl;
            printMatrix(matrixA, rows, cols);
            if(matrixIsDiagonal(matrixA, rows, cols)) cout<<"Macierz jest diagonalna.";
            if(!matrixIsDiagonal(matrixA, rows, cols)) cout<<"Macierz nie jest diagonalna.";
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "swap") {
        bool makeMatrixDouble=matrixTypeCheck();

        if(makeMatrixDouble) {
            double val1, val2;

            cout<<"Wprowadz wartosc 1: ";
            cinNewDouble(val1);
            cout<<"Wprowadz wartosc 2: ";
            cinNewDouble(val2);

            swap(val1, val2);

            cout<<"Wartosci po zamianie: "<<endl;
            cout<<"Wartosc 1: "<<val1<<endl;
            cout<<"Wartosc 2: "<<val2<<endl;

            getchar();
            exit();
        }

        else {
            int val1, val2;

            cout<<"Wprowadz wartosc 1: ";
            cinNewInt(val1);
            cout<<"Wprowadz wartosc 2: ";
            cinNewInt(val2);

            swap(val1, val2);

            cout<<"Wartosci po zamianie: "<<endl;
            cout<<"Wartosc 1: "<<val1<<endl;
            cout<<"Wartosc 2: "<<val2<<endl;

            getchar();
            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "sortRow") {
        int cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc elementow tablicy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);
        cout<<endl;

        if(makeMatrixDouble) {
            double *array=new double[cols];

            for(int i=0; i<cols; i++) {
                cout<<"Wartosc "<<i+1<<": ";
                cinNewDouble(array[i]);
            }

            sortRow(array, cols);
            cout<<"Posortowana tablica: ";
            for(int i=0; i<cols; i++) cout<<array[i]<<"\t";
            getchar();

            delete[] array;

            exit();
        }

        else {
            int *array=new int[cols];

            for(int i=0; i<cols; i++) {
                cout<<"Wartosc "<<i+1<<": ";
                cinNewInt(array[i]);
            }

            sortRow(array, cols);
            cout<<"Posortowana tablica: ";
            for(int i=0; i<cols; i++) cout<<array[i]<<"\t";
            getchar();

            delete[] array;

            exit();
        }
    }

    else if(experimental::string_view(argv[1]) == "sortRowsInMatrix") {
        int rows, cols;
        bool makeMatrixDouble=matrixTypeCheck();

        cout<<"Podaj ilosc wierszy obu macierzy: ";
        do {
            cinNewInt(rows);
            if(rows<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(rows<=0);

        cout<<"Podaj ilosc kolumn obu macierzy: ";
        do {
            cinNewInt(cols);
            if(cols<=0) cout<<"Podano bledna wartosc. Sprobuj ponownie: ";
        } while(cols<=0);
        cout<<endl;

        if(makeMatrixDouble) {
            double** matrixA = new double*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new double[cols];

            double** result = new double*[rows];
            for(int i=0; i<rows; i++) result[i] = new double[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(sortRowsInMatrix(matrixA, rows, cols), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }

        else {
            int** matrixA = new int*[rows];
            for(int i=0; i<rows; i++) matrixA[i] = new int[cols];

            int** result = new int*[rows];
            for(int i=0; i<rows; i++) result[i] = new int[cols];

            cout<<"Macierz A:"<<endl;
            fillMatrix(matrixA, rows, cols);

            cout<<endl<<"Macierz wynikowa:"<<endl;
            printMatrix(sortRowsInMatrix(matrixA, rows, cols), rows, cols);
            getchar();

            for(int i=0; i<rows; i++) delete[] matrixA[i];
            delete[] matrixA;

            for(int i=0; i<rows; i++) delete[] result[i];
            delete[] result;

            exit();
        }
    }

    else help();

    return 0;
}