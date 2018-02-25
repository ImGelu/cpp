#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double a,b,c,v[100];

    for(int i=1; i<=3; i++) cin>>v[i];
    sort(v+1, v+4);

    a=v[3];
    b=v[2];
    c=v[1];

    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
    if((a*a)==(b*b)+(c*c)) cout<<"triunghi dreptunghic";
    else if((a*a)>(b*b)+(c*c)) cout<<"triunghi obtuzunghic";
    else if((a*a)<(b*b)+(c*c)) cout<<"triunghi ascutitunghic";
    }
    else cout<<"nu este triunghi";

    return 0;
}
