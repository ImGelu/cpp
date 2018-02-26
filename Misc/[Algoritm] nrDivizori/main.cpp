#include <iostream>

using namespace std;

int nrdivi(int n){
 int nrdiv=1, exp, d=2;
 while(n>1){
    exp=0;
    while(n%d==0){
        n=n/d;
        exp++;

    }
    d++;
    nrdiv=nrdiv*(exp+1);

 }
 return nrdiv;
}

int main()
{
    int n;
    cin>>n;
    cout<<nrdivi(n);
    return 0;
}
