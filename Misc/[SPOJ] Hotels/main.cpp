#include <iostream>

using namespace std;

int main(){
 int s, a[300002], n, m, maxim=0, k=0, bestSum=0;

 cin>>n>>m;

 for(int i=1; i<=n; i++) cin>>a[i];

 for(int i=1; i<=n; i++){
    maxim += a[i];
    while(maxim>m) maxim -= a[k++];
    if(maxim>bestSum) bestSum = maxim;
 }
 cout<<bestSum;
 return 0;
}
