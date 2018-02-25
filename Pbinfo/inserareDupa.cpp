#include <iostream>

using namespace std;

int main()
{
    int n, a[200];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]%2==0){
        a[i+1]=2*a[i];
        i++;
        n++;
        }
    }

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
