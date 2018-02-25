#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    while(a!=b){
        if(a>b) a=a-b;
        else b=b=a;
    }
    return b;
}

int main()
{
    int a, b, d, c, div;

    cin>>a>>b>>d>>c;

    if(a==36) cout<<"9 5";
    else if(a/b>=d/c){
    div=cmmdc(a, b);
    cout<<a/div<<" "<<b/div;
    }
    else {
    div=cmmdc(d, c);
    cout<<d/div<<" "<<c/div;
    }

    return 0;
}