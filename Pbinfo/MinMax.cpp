#include <fstream>
#include <limits.h>

using namespace std;

ifstream cin("minmax.in");
ofstream cout("minmax.out");

int main()
{
    int a[10001], n, maxim=INT_MIN, minim=INT_MAX;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        if(a[i]<=minim){ minim=a[i];}
        else if(a[i]>=maxim){ maxim=a[i];}
    }
    cout<<minim<<" "<<maxim;


    return 0;
}