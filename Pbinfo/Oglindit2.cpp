#include <iostream>

using namespace std;

int oglindit(int n){
    int nr=0;

    while(n>0){
        nr=nr*10 + n%10;
        n=n/10;
    }
    return nr;
}

int main()
{
    int n;
    cin>>n;
    cout<<oglindit(n);
    return 0;
}
