#include <iostream>

using namespace std;


int main(){

    int n;

    cin>>n;

    if(n==1) cout<<0;
    if(n%3==0 || n%3==1) cout<<(n/3)*2;
    if(n%3==2) cout<<(n/3)*2+1;

    return 0;
}