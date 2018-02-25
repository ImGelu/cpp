#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c==1) cout<<a+b;
    else if(c==2) cout<<a-b;
    else if(c==3) cout<<a*b;
    else if(c==4) cout<<a/b;
    else if(c==5) cout<<a%b;
        return 0;
}
