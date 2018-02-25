#include <iostream>

using namespace std;

int cmmdc(int a, int b, int &f){
    if(a==b) return f=b;
    else if(a>b) return f=cmmdc(a-b,b,f);
    else return f=cmmdc(a, b-a, f);
}

int main()
{
    int a, b, f;

    cin>>a>>b;

    cmmdc(a, b, f);

    cout<<f;
    return 0;
}
