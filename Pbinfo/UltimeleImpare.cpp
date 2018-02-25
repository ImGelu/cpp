#include <iostream>

using namespace std;

int main()
{
    int n, x, impar1=0, impar2=0, ok=0;
    cin>>n;

    for(int i=1; i<=n; i++){ cin>>x;
    if(x%2==1){ ok++; impar1=impar2; impar2=x; }
    }

    if(ok>=2) cout<<impar1<<" "<<impar2;
    else cout<<"Numere insuficiente";
    return 0;
}
