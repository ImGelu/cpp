#include <iostream>

using namespace std;

int n, l, a[1005];

int main()
{
    int n, t, varf=0;
    bool ok1=1, ok2=1, existaCresc=0, existaDesc=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<n; i++){
        if(a[i]<a[i+1]) existaCresc=1;
        else if(a[i]>a[i+1]) existaDesc=1;
    }

    ///cautare varf munte
    for(int i=1; i<=n; i++)
        if(a[i]>a[i+1]){varf=i; break;}

    if(varf==0 || existaCresc==0 || existaDesc==0){cout<<"NU"; return 0;}

    ///verificare prima parte a varfului
    for(int i=1; i<varf; i++)
        if(a[i]>=a[i+1]){ok1=0; cout<<"NU"; break;}

    ///verificare a doua parte a varfului
    if(ok1==1){
    for(int i=varf; i<n; i++)
        if(a[i]<=a[i+1]){ok2=0; cout<<"NU"; break;}
    }

    if(ok1==ok2 && ok1==1) cout<<"DA";

    return 0;
}