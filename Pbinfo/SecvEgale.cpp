#include <iostream>

using namespace std;

int main(){

    int a[1001], n, lS=0, lD=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++){
        int j=i;
        if(a[i]==a[j]){
            while(j<=n && a[i]==a[j]) j++;

            if(j-i>=lD-lS){
                lS=i;
                lD=j;
            }
            i=j-1;
        }
    }

    cout<<lS<<" "<<lD-1;

    return 0;
}