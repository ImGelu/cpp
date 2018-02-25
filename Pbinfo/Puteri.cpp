#include <iostream>
#include <math.h>

using namespace std;

int p=1;

int main()
{
    int n, x, y;
    cin>>n;

    for(int i=1; i<=n; i++){
        p=1;
        cin>>x>>y;
        if(x>y) swap(x,y);

        while(p<=y){
            p*=2;
        }
        if(p/2>=x && p/2<=y) cout<<p/2<<"\n";
        else cout<<0<<"\n";
    }

    return 0;
}
