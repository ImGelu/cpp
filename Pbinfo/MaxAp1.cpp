#include <iostream>

using namespace std;


int determinare_aparitii_element(int x, int a[][105], int n, int m){
    int k=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(a[i][j]==x) k++;

    return k;
}

int determinare_maxim_aparitii(int a[][105], int n, int m){
    int numar_maxim_aparitii=0, element_numar_maxim=0;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            int aparitii=determinare_aparitii_element(a[i][j], a, n, m);
            if(aparitii>numar_maxim_aparitii){
                element_numar_maxim=a[i][j];
                numar_maxim_aparitii=aparitii;
            }
            else if(aparitii==numar_maxim_aparitii) element_numar_maxim = max(a[i][j], element_numar_maxim);
        }

    return element_numar_maxim;
}


int main() {
    int a[105][105], n, m;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    cout<<determinare_maxim_aparitii(a, n, m);

    return 0;
}