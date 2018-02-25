#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, s=0;
    while(x!=0){
        cin>>x;
        if(x%2==0) s=s+x;
    }
    cout<<s;
    return 0;
}
