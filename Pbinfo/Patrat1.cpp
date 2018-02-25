#include <iostream>

using namespace std;

int main()
{
    int n, k=1;
    char c1, c2;

    cin>>n>>c1>>c2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        if(k%2==1) cout<<c1;
        else cout<<c2;
        k++;
        }
        cout<<endl;
    }
    return 0;
}
