///DETERMINAREA NUMARULUI DE ELEMENTE DIN VECTOR CARE SUNT POZITIVE, NEGATIVE SI NULE

#include <iostream>

using namespace std;

int main()
{
    int n, a[100], nr_pozitive=0, nr_negative=0, nr_nule=0;

    cin>>n; ///citim numarul de elemente

    for(int i=1; i<=n; i++) ///parcurgem cu for pentru a citi vectorul
        cin>>a[i];

    for(int i=1; i<=n; i++){ ///dupa citire, verificam cate elemente sunt pozitive, negative sau nule
        if(a[i]==0) ///verificam daca elementul de pe pozitia i este egal cu 0 (element nul)
            nr_nule=nr_nule+1; ///daca elementul de pe pozitia i este egal cu 0, marim contorul cu 1

        if(a[i]>0) ///verificam daca elementul de pe pozitia i este pozitiv
            nr_pozitive=nr_pozitive+1; ///daca elementul de pe pozitia i este pozitiv, marim contorul cu 1

        if(a[i]<0) ///verificam daca elementul de pe pozitia i este negativ
            nr_negative=nr_negative+1; ///daca elementul de pe pozitia i este negativ, marim contorul cu 1
    }

    ///dupa ce numaram elementele, afisam cate elemente sunt nule, pozitive, negative

            cout<<"Sunt "<<nr_negative<<" elemente negative";
            cout<<endl;
            cout<<"Sunt "<<nr_pozitive<<" elemente pozitive";
            cout<<endl;
            cout<<"Sunt "<<nr_nule<<" elemente nule";

    return 0;
}
