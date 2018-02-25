#include <iostream>
using namespace std;

int main()
{
    int h,m,hx,mx;
    cin>>h>>m>>hx>>mx;

        m=m+mx+60*hx;

    while(m>59){
        m=m-60;
        h++;
    if(h>=24) h=0;
    }

    cout<<h<<" "<<m;
    return 0;
}
