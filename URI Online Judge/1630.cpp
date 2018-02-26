#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
long long x,y;

while(cin>>x>>y){

long long dist=__gcd(x,y);
int d1 = x / dist +1;
int d2 = y / dist-1;

cout<<2*d1 + 2*d2<<'\n';

}
return 0;
}