#include <iostream>

using namespace std;

int multipli(int a, int b, int c){
    int k=0, val=0;
    for(int i=a; i<=b; i++)
        if(i%c==0){ val=i; break; }

    if(val==0) return 0;
    return ((b-val)/c)+1;
}

int main()
{
    int a, b, c;

    cin>>a>>b>>c;

    cout<<multipli(a,b,c);
    return 0;
}
