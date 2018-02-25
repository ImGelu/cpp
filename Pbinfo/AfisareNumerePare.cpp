#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, rez=0, k=1;
    cin>>n;
    rez=rez+2;
    while(k<=n){
        cout<<rez<<" ";
        rez=rez+2;
        k++;
    }
    return 0;
}
