#include <iostream>

using namespace std;

int main()
{

    int n, cnt=0;
    bool ciur[2000005];

    cin>>n;
    for(int i=2; i<=n; i++){
        if(ciur[i]==0){
        cnt++;

    for(int j=i+i; j<=n; j=j+i)
        ciur[j]=1;
    }
    }

    cout<<cnt;
    return 0;
}
