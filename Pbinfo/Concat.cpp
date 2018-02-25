#include <iostream>

using namespace std;

int invers(int n){
    int nr=0;
    while(n>0){
        nr=nr*10 + n%10;
        n=n/10;
    }
    return nr;
}

int concat(int a, int b){
    int nr = invers(b), sol=a;
    while(nr>0){
        sol=sol*10 + nr%10;
        nr=nr/10;
    }
    return sol;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<concat(a,b);
    return 0;
}
