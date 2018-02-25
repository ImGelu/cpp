#include <iostream>

using namespace std;

int main(){

    int n, k2=0, k5=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        int x=i;
        while(x%2==0){k2++; x/=2;}
        while(x%5==0){k5++; x/=5;}
    }

    cout<<min(k2, k5);

    return 0;
}