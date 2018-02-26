#include <iostream>

using namespace std;

int main()
{
    unsigned short a[261][261], b[261][261], m, n, min1, min2, jmin;

    cin>>n>>m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    b[1][0]=32000;

    for(int i=1; i<m; i++) b[1][i] = a[0][0] + a[0][i] + a[1][i];

    for(int i=1; i<n-1; i++){
        if(b[i][0]<=b[i][1]){ min1=b[i][0]; min2=b[i][1]; jmin=0;}
        else{ min1=b[i][1]; min2=b[i][0]; jmin=1; }

    for(int j=2; j<m; j++)
        if(b[i][j]<min1){ min2=min1; min1=b[i][j]; jmin=j; }
		else if(b[i][j]<min2) min2=b[i][j];

    for(int j=0; j<m; j++)
        if(j!=jmin) b[i+1][j]=min1+a[i][j]+a[i+1][j];
        else b[i+1][j]=a[i][j]+a[i+1][j]+min2;
    }

    min1=b[n-1][0];

    for(int j=1; j<m; j++)
        if(b[n-1][j]<min1) min1=b[n-1][j];

    cout<<min1+a[n-1][m-1];

  return 0;
}
