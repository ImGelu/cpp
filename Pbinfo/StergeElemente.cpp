#include <iostream>

using namespace std;

int sterge(int v[100], int &n, int i, int j){
    int k=i;
    for(int ii=j+1; ii<=n; ii++) v[k++]=v[ii];
    n=n-j+i-1;
}

int main(){

    return 0;
}
