#include <iostream>

using namespace std;

int main()
{
    int n, n2, k, gasit=0;

    cin>>n>>k;

    n2=n;

    while(!gasit){
        n--;
        n2++;
        if(n%k==0){ gasit=1; cout<<n; break; }
        else if(n2%k==0) {gasit=1; cout<<n2; break;}
    }
    return 0;
}
