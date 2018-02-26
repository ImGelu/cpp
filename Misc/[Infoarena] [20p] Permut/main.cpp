#include <iostream>
#include <algorithm>

using namespace std;

int a[100005], b[100005];
int main()
{
int n;
cin>>n;
for(int i=1; i<=n; ++i)cin>>a[i];
for(int i=1; i<=n; ++i)cin>>b[i];
sort(a+1, a+n+1);
sort(b+1, b+n+1);
int p=0;
for(int i=1; i<=n; ++i)p+=a[i]*b[i];
cout<<p;
return 0;
}
