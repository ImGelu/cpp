#include <iostream>

using namespace std;

int mp(int n){
    if(n>=12) return n-1;
    else return mp(mp(n+2));
}

int main()
{
    int n;

    cin>>n;

    cout<<mp(n);

    return 0;
}
