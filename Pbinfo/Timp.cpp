#include <iostream>
using namespace std;

int main()
{
    int h,m,x;
    cin>>h>>m>>x;

        m=m+x;

    while(m>59){
        m=m-60;
        h++;
    if(h>=24) h=0;
    }

    cout<<h<<" "<<m;
    return 0;
}
