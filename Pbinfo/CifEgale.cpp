#include <iostream>

using namespace std;

int main()
{
    int n, nr;
    bool ok=1;

    cin>>n;

    while(n>9){
        nr=n%10;
        n=n/10;
        if(nr!=n%10){ok=0; break;}
    }

    if(ok==1) cout<<"da";
    else cout<<"nu";
    return 0;
}
