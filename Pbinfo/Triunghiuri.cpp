#include <iostream>

using namespace std;

bool triunghi(int a, int b, int c){

if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a) return true;
return false;

}

int main()
{
    int n, a[100], k=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            for(int z=j+1; z<=n; z++)
            if(triunghi(a[i], a[j], a[z])) k++;

    cout<<k;

    return 0;
}