#include <fstream>

using namespace std;

ifstream cin("fiboverif1.in");
ofstream cout("fiboverif1.out");

bool isFibo(int n){
    int f1=1, f2=1, fn, ok=0;
    while(f1+f2<=n){
        fn=f1+f2;
        f1=f2;
        f2=fn;
        if(fn==n) ok=1;
    }
    if(ok==1 || n==1) return true;
    return false;
}


int main()
{
    int n, a[1000];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(isFibo(a[i])) cout<<a[i]<<" ";
    }

    return 0;
}