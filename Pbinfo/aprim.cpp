#include <iostream>
#include <math.h>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}


int main(){
      bool ok=0;
      int n;

      cin>>n;

      for(int i=2; i<sqrt(n); i++)
            if(n%i==0 && prim(i) && prim(n/i)) ok=1;

    if(ok) cout<<"DA";
    else cout<<"NU";

      return 0;
}