#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, minim=INT_MAX, maxim=INT_MIN, x;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x<minim) minim=x;
        if(x>maxim) maxim=x;
    }
    cout<<minim+maxim;
    return 0;
}