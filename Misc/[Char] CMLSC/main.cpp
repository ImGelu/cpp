#include<iostream>
#include <string.h>
#include<algorithm>

using namespace std;

int nr, s[100][100], k=0;
char a[100], b[100], sol[100];

int main()
{
    int k=0;
    cin.getline(a,100);
    cin.getline(b,100);

    int n = strlen(a);
    int m = strlen(b);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
          if(a[i]==b[j]){k++; sol[k]=b[j]; s[i][j]=s[i-1][j-1]+1;}
          else
            s[i][j]=max(s[i][j-1], s[i-1][j]);

    cout<<s[n-1][m-1]<<"\n";

    for(int i=1; i<=k; i++)
       cout<<sol[k]<<" ";

    return 0;
}
