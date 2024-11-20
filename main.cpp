#include <iostream>
using namespace std;

int main() {
    int f, n, multiplo;
    for(f=1; f<=10; f=f+1)
    {
        cout<<"In output la tabellina del "<<f<<endl;
        for(n=1; n<=10; n=n+1)
        {
            multiplo=f*n;
            cout<<"Il suo multiplo è "<<multiplo<<endl;
        }
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
