#include <iostream>

using namespace std;

int main(){

    int lD=0, lS=0, n, a[1001];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        if(a[i]==0){
            int j=i+1;
            while(j<=n && a[j]==0) j++;

            if(j-i > lD-lS){
                lS=i;
                lD=j;
            }

            i=j-1; //continuam parcurgerea
            }
        }

    cout<<lS<<" "<<lD-1; //-1 pentru ca j-ul ajunge la urmatorul numar nenul (urmatorul dupa sfarsitul secventei)

    return 0;
}