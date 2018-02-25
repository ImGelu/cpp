#include <iostream>

using namespace std;

int main()
{
    int n, k=2;
    char c[100], c2[100];
    cin>>n>>c>>c2;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
        if (j<=n-1 && j>1 && i!=1 && i!=n){ cout<<c2; k++; }
        else cout<<c;
        cout<<endl;
    }
    return 0;
}
