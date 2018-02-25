#include <iostream>

using namespace std;

int main()
{
    int fr[500005], x, n, k=0, nr[10];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x<=999) fr[x]++;
    }

    for(int i=999; i>=100; --i){
        if(fr[i]==0) nr[++k]=i;
        if(k==2) break;
    }

    if(k==0 || k==1) cout<<"NU EXISTA";
    else{
        if(nr[1]>nr[2]) swap(nr[1], nr[2]);
        cout<<nr[1]<<" "<<nr[2]<<" ";
    }

    return 0;
}