#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int minim=INT_MAX, x, pozitive=0;
        while(x!=0){
        cin>>x;
        if(x<minim && x>0){ minim=x; pozitive=1; }
        }
    if(pozitive==1) cout<<minim;
    else cout<<"NU EXISTA";
    return 0;
}
