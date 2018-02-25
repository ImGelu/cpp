#include <fstream>
#include <limits.h>

using namespace std;

ifstream cin("maxim4.in");
ofstream cout("maxim4.out");

int main()
{
    int a[10001], n, maxim=INT_MIN, k=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]>=maxim) maxim=a[i];
    }

    for(int i=1; i<=n; i++){
        if(a[i]==maxim) k++;
    }
    cout<<maxim<<" "<<k;


    return 0;
}