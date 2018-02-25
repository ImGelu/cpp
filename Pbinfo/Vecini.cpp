#include <iostream>

using namespace std;

bool verifica(int x[], int n)
{
    for(int i=2;i<n;i++)
    {
        int paritate=x[i]%2;
        if(x[i-1]%2==paritate && x[i+1]%2==paritate) return true;
    }

    return 0;
}

int main(){

    int a[1001], n;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    if(verifica(a, n)) cout<<"DA";
    else cout<<"NU";

    return 0;
}