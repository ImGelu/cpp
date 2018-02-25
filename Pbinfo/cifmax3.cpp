#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int a, maxim=INT_MIN;
    cin>>a;
    while(a>0){
        if(a%10>maxim) maxim=a%10;
        a=a/10;
    }
    cout<<maxim;

        return 0;
}
