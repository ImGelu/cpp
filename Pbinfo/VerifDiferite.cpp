#include <iostream>

using namespace std;

int main()
{
    int n, a[10000], diferit=1;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=1; i<n-1; i++){
        for(int j=i+1; j<n; j++)
            if(a[i]==a[j]) diferit=0;
    }

    if(diferit==0) cout<<"NU";
    else cout<<"DA";
    return 0;
}
