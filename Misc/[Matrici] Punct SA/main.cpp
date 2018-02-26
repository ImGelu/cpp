#include <iostream>
#include <limits.h>
//punctul sa daca cel mai mic pe coloana lui si cel mai mare pe randul sau invers
using namespace std;

int max_linie(int a[100][100], int n, int m, int l){
int max=INT_MIN;

for(int j=1; j<=m; j++){
    if(a[l][j]>max)
    max=a[l][j];}
return max;
}

int max_col(int a[100][100], int n, int m, int c){
int max=INT_MIN;

for(int j=1; j<=n; j++){
    if(a[j][c]>max)
    max=a[j][c];}
return max;
}

int min_col(int a[100][100], int n, int m, int c){
int min=INT_MAX;

for(int j=1; j<=n; j++){
    if(a[j][c]<min)
    min=a[j][c];}
return min;
}

int min_linie(int a[100][100], int n, int m, int l){
int min=INT_MAX;

for(int j=1; j<=m; j++){
    if(a[l][j]<min)
    min=a[l][j];}
return min;
}

int main()
{

    int n, m, a;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
    if(max_linie(a,n,m,i)==a[i][j] && min_col(a,n,m,j)==a[i][j])
    // sau
        if(min_linie(a,n,m,i)==a[i][j] && max_col(a,n,m,j)==a[i][j])

    cout<<a[i][j]<<"    "<<i<<" "<<j<<endl;


    return 0;
}
