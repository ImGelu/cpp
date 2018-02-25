#include <iostream>

using namespace std;

int a_prim(int n)
{
    int d, nr, k=0;
    d=2;
    nr=0;

    while (d*d<=n && nr<=2){
        if(n%d==0 && nr<=2){
            nr=nr+2;
            if(n/d==d) nr=nr-1;
            n=n/d;
        }
         d++;
    }
    if(nr==2) k=1;
    if(k==1) return 1;
    else return 0;

}

int main(){

    return 0;
}