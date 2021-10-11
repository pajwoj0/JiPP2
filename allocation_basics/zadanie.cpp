#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    for(int i=0; i<argc; i++) cout<<"Argument" <<i<<": "<<argv[i]<<endl;

    int l = stoi(argv[2]);
    cout<<l<<endl;

    if(argv[1]=="add") {
        cout<<"add";
    }

    else if(argv[1]=="subtract") {
        cout<<"subtract";
    }

    else if(argv[1]=="volume") {
        cout<<"volume";
    }

    else if (argv[1]=="help") {
        cout<<"help";
    }

    else {
        cout<<"Blad";
    }

    return 0;
}