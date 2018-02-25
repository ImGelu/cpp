#include <iostream>

using namespace std;

int factorial(int n, int &f){
    if(n==0) return f=1;
    else return f=n*factorial(n-1, f);
}

int main()
{
    int n, f;

    cin>>n;

    cout<<factorial(n, f);
    return 0;
}
