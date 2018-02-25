#include <iostream>

using namespace std;

void numar(int n, int k, int &x)
{
    int fr[10]={0}, aux=n, cnt=0;
    x=0;

    while(aux){
        fr[aux%10]++;
        aux=aux/10;
    }

    for(int i=9; i>=0; i--){
        for(int j=1; j<=fr[i]; j++){
        cnt++;
        if(cnt>k) break;
        x=x*10+i;
        }
    }
}

int main()
{
    int n, k, x=0;

    cin>>n>>k;

    numar(n,k,x);

    cout<<x;

    return 0;
}
