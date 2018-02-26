#include <iostream>
using namespace std;
int main()

{
    int n,i,za,p,j,a[100][100],k=1,lin,col;
    cin>>n;
    za=n;
    lin=1 ;
    col=1;

    p=(n+1)/2;

    while(p>0)
    {
        for(j=col; j<=za; ++j)
        {
            a[lin][j]=k;
            k++;
        }

        for(i=lin+1; i<=za; ++i)
        {
            a[i][za]=k ;
            k++;
        }

        for(j=za-1; j>=col; --j)
        {
            a[za][j]=k;
            k++;
        }

        for(i=za-1; i>=lin+1; --i)
        {
            a [i] [lin] =k;
            k++;
        }

        col++;
        za--;
        lin++;

        p--;
    }

    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=n; ++j) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
