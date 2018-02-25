#include <iostream>

using namespace std;

int valuri(int n, int v[100]){
    for(int i=0; i<2*n; i++)
        if(i%2==0) v[i+1] = 2*n-i;
        else v[i-1]=i;
}

int main()
{
    int n, v[100];

    cin>>n;

    valuri(n, v);

    for(int i=0; i<2*n; i++) cout<<v[i]<<" ";

    return 0;
}
