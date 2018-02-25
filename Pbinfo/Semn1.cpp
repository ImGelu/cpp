#include <iostream>

using namespace std;

int main()
{

    int x, b;

    cin>>x>>b;
    if(x<0 && b<0 || x>0 && b>0 || x==0 && b==0) cout<<"da";
    else
        cout<<"nu";
    return 0;
}
