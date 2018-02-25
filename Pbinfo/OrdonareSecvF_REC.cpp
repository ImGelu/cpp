#include <iostream>

using namespace std;

int ordonare(int v[], int n, int s, int d){
    if(n<0) return 0;
    else{
        for(int i=s; i<d; i++)
            if(v[i]>v[i+1]) swap(v[i],v[i+1]);
    }

    return ordonare(v, n-1, s, d);
}

int main(){

    return 0;
}