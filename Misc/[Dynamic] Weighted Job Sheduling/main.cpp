#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

struct job{
    int start, fin, castig;
};

    job a[100];

int main()
{
    int n, s[100], maxim = INT_MIN;

    cin>>n;

    s[0] = 0;

    for(int i=1; i<=n; i++){
        cin>>a[i].start>>a[i].fin>>a[i].castig;
    }

    for(int i=1; i<=n; i++){
        s[i] = max(a[i].castig, s[i-1]);
    for(int j=i-1; j>=0; j--)
        if(a[j].fin <= a[i].start) s[i] = max(s[i], a[i].castig + s[j]);
    }

    for(int i=1; i<=n; i++)
        if(s[i]>maxim) maxim = s[i];

    cout<<maxim;
    return 0;
}
