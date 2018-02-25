#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n, delta, x1, x2;

    cin>>n;

    delta = 4*n + 1;

    x1=(-1+sqrt(delta))/2;
    x2=(-1-sqrt(delta))/2;

    if(abs(x1)*abs(x2)==n){
        if(abs(x1)>abs(x2)) swap(x1, x2);
        cout<<abs(x1)<<" "<<abs(x2);
    }
    else cout<<"NU EXISTA";

    return 0;
}
