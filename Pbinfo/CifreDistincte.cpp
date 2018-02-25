#include <iostream>

using namespace std;

bool distinct(int n){
    int fr[10]={0,0,0,0,0,0,0,0,0,0};
    while(n){
        fr[n%10]++;
        n/=10;
    }
    for(int i=0; i<=9; i++)
        if(fr[i]>1) return false;

    return true;
}

int main()
{
    int a[1005], n, ok=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(!distinct(a[i])){ok=0; break;}
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
