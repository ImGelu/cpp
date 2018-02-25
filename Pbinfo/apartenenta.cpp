#include <iostream>

using namespace std;

bool apartenenta(int n){
        while(n%2==0) n/=2;
        while(n%3==0) n/=3;
        while(n%5==0) n/=5;
    if(n==1) return 1;
    return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<apartenenta(n);
    return 0;
}
