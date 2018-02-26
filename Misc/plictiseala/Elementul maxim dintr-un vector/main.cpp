///ELEMENTUL MAXIM DINTR-UN VECTOR

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, a[100], maxim=INT_MIN; ///elementul maxim se initializeaza cu INT_MIN, iar pentru asta trebuie sa includem <limits.h>

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        if(a[i]>maxim) ///daca elementul de pe pozitia i este mai mare decat elementul maxim...
            maxim=a[i]; ///...actualizam maximul cu elementul de pe pozitia i
    }

    cout<<"Elementul maxim este "<<maxim; ///dupa ce se parcurge tot vectorul, afisam elementul maxim

    return 0;
}
