#include <iostream>

using namespace std;

int n, a[10000];

bool constant(int n){
    for(int i=1; i<n; i++)
        if(a[i]!=a[i+1]) return false;
    return true;
}

bool crescator(int n){
    for(int i=1; i<n; i++)
        if(a[i]>=a[i+1]) return false;
    return true;
}

bool strcrescator(int n){
    for(int i=1; i<n; i++)
        if(a[i]>a[i+1]) return false;
    return true;
}

bool descrescator(int n){
    for(int i=1; i<n; i++)
        if(a[i]<a[i+1]) return false;
    return true;
}

bool strdescrescator(int n){
    for(int i=1; i<n; i++)
        if(a[i]<=a[i+1]) return false;
    return true;
}

int main()
{

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    if(constant(n)) cout<<"sir constant";
    else if(strcrescator(n)) cout<<"sir strict crescator";
    else if(crescator(n)) cout<<"sir crescator";
    else if(strdescrescator(n)) cout<<"sir strict descrescator";
    else if(descrescator(n)) cout<<"sir descrescator";
    else cout<<"sir neordonat";

    return 0;
}
