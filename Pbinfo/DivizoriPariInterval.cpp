#include <iostream>

#define INF 2147000000

using namespace std;

int d, a, b, nrdivmax=-INF, maxx ,minn, nr, nrd, n, d2, m;

int main(){

    cin>>a>>b;
    if(a%2==1) a++;

    for(int i=a; i<=b; i+=2){
        nrd=0;
        d2=0;
        m=i;

        while(m%2==0) m=m/2, d2++;

        for(int d=1; d*d<m; d+=2)
            if(i%d==0) nrd+=2;
            if(d*d==i) nrd++;
            nrd*=d2;

        if(nrd>nrdivmax) nrdivmax=nrd, minn=maxx=i;
        else if(nrd==nrdivmax) maxx=i;
    }

    cout <<nrdivmax<<" "<<minn<<" "<<maxx;

    return 0;
}