#include <iostream>

using namespace std;

int main()
{
    int T,N,ani[10],s=0, caz;
    float aux;

    cin>>T;
    for(int i=1; i<=T; i++){
    cin>>N;
    for(int j=1; j<=N; j++){
    cin>>ani[j];
    }
    cout<<"Case "<<i<<": "<<ani[N/2+1]<<"\n";
    }
    return 0;
}
