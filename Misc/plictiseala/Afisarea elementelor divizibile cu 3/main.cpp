///Afisarea elementelor divizibile cu 3 dintr-un vector

#include <iostream>

using namespace std;

int main()
{
    int n, a[100];

    cin>>n; ///citim numarul de elemente

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        if(a[i]%3==0) ///daca restul impartirii dintre element si 3 este 0
            cout<<a[i]<<" "; ///daca [,] se respecta conditia, afisam elementul de pe pozitia i
    }

    return 0;
}
