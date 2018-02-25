#include <iostream>

using namespace std;

int fr[10];

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        while(x>9) x=x/10;
        fr[x]++;
    }

    for(int i=1; i<=9; i++)
        for(int j=1; j<=fr[i]; j++)
            cout<<i;

    return 0;
}