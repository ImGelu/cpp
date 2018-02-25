#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin>>x>>y;

    if(y<x) swap(y,x);

    if(y-x<=2 && x%2==0) cout<<"Andrei e mai responsabil";
    else cout<<"minciuna";
    return 0;
}
