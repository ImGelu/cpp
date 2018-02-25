#include <iostream>

using namespace std;

int ordonare(int v[], int n){
    if(n<0) return 0;
    else{
        for(int i=0; i<n-1; i++)
            if(v[i]>v[i+1]) swap(v[i],v[i+1]);
    }

    return ordonare(v, n-1);
}

int main(){

    return 0;
}