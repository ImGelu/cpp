#include <iostream>

using namespace std;

int nr_sa(int a[100][100], int n, int m){
    int k=0, ml, mc, fr[200]={0};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            fr[a[i][j]]++;
            if(fr[a[i][j]]==n*m) return n*m;
        }
    }

    for(int i=0; i<n; i++){
        ml=a[i][0];
        for(int j=0; j<m; j++)
            if(a[i][j]>=ml) ml=a[i][j];

        for(int j=0; j<m; j++)
        if(a[i][j]==ml){
            mc=a[0][j];
            for(int z=0; z<n; z++)
                if(a[z][j]<=mc) mc=a[z][j];
            if(mc==ml) k++;
        }
    }

    for(int i=0; i<n; i++){
        ml=a[i][0];
        for(int j=0; j<m; j++)
            if(a[i][j]<=ml) ml=a[i][j];

        for(int j=0; j<m; j++)
        if(a[i][j]==ml){
            mc=a[0][j];
            for(int z=0; z<n; z++)
                if(a[z][j]>=mc) mc=a[z][j];
            if(mc==ml) k++;
        }
    }
    return k;
}

int main(){

    return 0;
}