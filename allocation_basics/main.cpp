#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    for(int i=0; i<argc; i++) cout<<"Argument: "<<argv[i]<<endl;

    int *n;
    n = new int;
    int k;
    cout<<n<<endl<<*n<<endl<<&n<<endl<<&k<<endl;

    delete n;

    //tablica 1 wymiar
    int *tab = new int[5];
    delete[] tab;

    //tablica 2 wymiary
    int **tab2 = new int*[5];
    for(int i=0; i<5; ++i) tab2[i] = new int[5];

    return 0;
}