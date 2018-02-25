#include <iostream>

using namespace std;

int main()
{
    int n, c, a[1001], s=0, k=0;

    cin>>n>>c;

    a[n+1] = 1000000001;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n+1; i++){
        if(s+a[i]<=c){
            s+=a[i];
        }
        else{k++, s=0;

        if(i!=n+1) i--;}
    }

    cout<<k;
    return 0;
}
