#include <iostream>

using namespace std;

void afis(){
    int x;
    cin>>x;
    if(x!=0) afis();
    cout<<x<<" ";
}

int main()
{

    afis();

    return 0;
}
