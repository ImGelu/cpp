#include <iostream>
#include <math.h>

using namespace std;

bool pp(int n){
    if(sqrt(n)==(int)sqrt(n)) return true;
    return false;
}

int main()
{
    int n;

    cin>>n;

    for(int i=1; i<=sqrt(n); i++)
        if(pp(n-i*i) && i<=sqrt(n-i*i)) cout<<i<<" "<<sqrt(n-(i*i))<<"\n";
    return 0;
}
