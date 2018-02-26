#include <iostream>
///rotire matrice
using namespace std;

int main()
{
    int n;

    cin>>n;
    int a[100][100], b[100][100];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
    cin>>a[i][j];}
    cout<<"\n";
   for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
    b[j][n-i+1]=a[i][j];

       for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<b[i][j]<<" ";
            cout<<endl;}

    return 0;

}
