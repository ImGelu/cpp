#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f,k=0;
cin>>a>>b>>c>>d>>e>>f;
if (a>0 or b>0)
    k++;
if (b>0)
    k++;
if (c>0)
    k++;
if (d>0)
    k++;
if (e>0)
    k++;
if (f>0)
    k++;
    cout<<k<<" valores positivos\n";
    return 0;
}
