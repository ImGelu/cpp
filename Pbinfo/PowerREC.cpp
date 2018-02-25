#include <iostream>

using namespace std;

int rp(int a, int b){
    if(b==0) return 1;
    else return a*rp(a,b-1);
}

int main()
{
    int a, b;

    cin>>a>>b;

    cout<<rp(a,b);

    return 0;
}
