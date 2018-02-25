#include <iostream>

using namespace std;

void sumcif(int n, int &sum, int &tum){
    int s=0, t=0;

    while(n){
        if((n%10)%2==0) s+=n%10;
        else t+=n%10;
        n/=10;
    }
    sum=s;
    tum=t;
}

int main()
{
    int n, s, t;

    cin>>n;

    sumcif(n, s, t);

    cout<<s<<" "<<t;
    return 0;
}
