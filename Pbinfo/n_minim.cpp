#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, minim=INT_MAX, x;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x<minim) minim=x;
    }
    cout<<minim;
    return 0;
}
