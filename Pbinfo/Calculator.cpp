#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    string s;

    cin>>a>>b>>s;

    if(s=="+") cout<<a+b;
    else if(s=="-"){if(b>a) swap(a,b); cout<<a-b;}
    else if(s=="*") cout<<a*b;
    else if(s=="/"){if(b>a) swap(a,b); cout<<a/b;}

    return 0;
}
