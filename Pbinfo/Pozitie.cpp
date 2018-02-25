#include <fstream>

using namespace std;

ifstream cin("pozitie.in");
ofstream cout("pozitie.out");

int main()
{
    int n, a[100000], k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]<a[1]) k++;
    }

    cout<<k+1;

    return 0;
}