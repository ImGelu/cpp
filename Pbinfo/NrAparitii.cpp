//#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("nraparitii.in");
ofstream cout("nraparitii.out");

int main()
{
    int n, a[100], k=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
        if(a[i]==a[n]) k++;

    cout<<k;
    return 0;
}