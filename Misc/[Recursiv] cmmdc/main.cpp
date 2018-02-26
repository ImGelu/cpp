#include <iostream>

using namespace std;

int cmmdc(int a, int b){

if(a==b) return a;
else if(a>b) return cmmdc(a-b,b);
else return cmmdc(a, b-a);
}

int main()
{
    int a,b,n;
    cin>>a>>b;
    cout<<cmmdc(a,b);
    return 0;
}
