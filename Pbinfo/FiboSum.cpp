#include <iostream>

using namespace std;

long long a,b,c,i,nr;

int main()
{
        cin>>nr;

        a=0;
        b=1;
        c=a+b;

        while(a<=nr){
            a=b;
            b=c;
            c=a+b;
            if(a==nr) {cout<<a; return 0;}
            if(b>nr) cout<<a<<" ",nr=nr-a, a=1, b=1, c=a+b;
        }

     return 0;
}