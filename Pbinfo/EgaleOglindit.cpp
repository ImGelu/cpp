#include <iostream>

using namespace std;

int invers(int n){
    int nr=0;
    while(n){
        nr=nr*10+n%10;
        n/=10;
    }
    return nr;
}

int main()
{
    int n, a[1000], ok=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(i!=1 && a[i]==invers(a[1])){ok=1; break;}
    }

    if(ok) cout<<"DA";
    else cout<<"NU";


    return 0;
}
