#include <iostream>

using namespace std;

int main()
{
    int n, m, k=0;

    cin>>n>>m;

    while(n){
        if(n%10!=0 && m%(n%10)==0) k++;
        n/=10;
    }
    cout<<k;

    return 0;
}
