#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    return b;
}

int main()
{
    int n, a[500][500], s=0, s2=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        if(i<j) s+=a[i][j];
        else if(i>j) s2+=a[i][j];
        }
    }

    cout<<cmmdc(s, s2);

    return 0;
}