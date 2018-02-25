#include <iostream>

using namespace std;

int UCP(int n){
    if(n==0) return 0;
    while(n>0){
        if((n%10)%2==0) return n%10;
        n/=10;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    cout<<UCP(n);
    return 0;
}
