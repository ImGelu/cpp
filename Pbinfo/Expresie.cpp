#include <iostream>

using namespace std;

int main()
{
    unsigned long long n, s=0, p=1;
    cin>>n;

    for(unsigned long long i=1; i<=n; i++){
        p=p*i;
        s+=p;
    }

    cout<<"Rezultatul este "<<s;
    return 0;
}
