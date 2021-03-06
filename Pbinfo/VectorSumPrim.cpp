#include <iostream>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

void P(int x[], int n, int &s){

    s=0;

    for(int i=0; i<n; i++)
        if(prim(x[i])) s+=x[i];

}

int main()
{
    int n, x[105], s=0;

    cin>>n;

    for(int i=0; i<n; i++) cin>>x[i];

    P(x,n,s);

    cout<<s;

    return 0;
}
