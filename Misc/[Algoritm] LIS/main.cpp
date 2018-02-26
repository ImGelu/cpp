#include <iostream>
#include <algorithm>
#define MX 100001

using namespace std;

int main()
{
    int64_t a[MX], n, t[MX], maxim=0, k=0;

    cin>>n;

    a[0] = 0;
    t[0] = 0;

    for(int i=1; i<=n; ++i){
        cin>>a[i], t[i]=1;
            for(int j=0; j<i; ++j)
            if(a[j]<a[i] && t[i]<t[j]+1) t[i]=max(t[i], t[j]+1);
            else k++;
    }

    sort(t+n, t+n+1);

    cout<<t[n];
    return 0;
}
