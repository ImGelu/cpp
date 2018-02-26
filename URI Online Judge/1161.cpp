#include <iostream>

using namespace std;

long long int sfact(long long int n, long long int m){
long long int factn=1, factm=1;

for(int i=1; i<=n; i++)
factn=factn*i;

for(int j=1; j<=m; j++)
factm=factm*j;

if(n==0)
    factn=1;

if(m==0)
    factm=1;

return factn+factm;
}

int main()
{
    int n,m;
while(cin>>n>>m)
    cout<<sfact(n,m)<<"\n";
}
