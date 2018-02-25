#include <iostream>

using namespace std;

int cifmin(int n){
    if(n<10) return n;
    else return min(n%10, cifmin(n/10));
}

int main()
{
    int n;

    cin>>n;

    cout<<cifmin(n);

    return 0;
}
