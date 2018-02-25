#include <fstream>
#include <limits.h>

using namespace std;

ifstream cin("pozmax.in");
ofstream cout("pozmax.out");

int main()
{
   int n, maxPrim=INT_MIN, crt=0, pozPrim, pozUltim;
   double x;
   cin>>n;
   for(int i=1; i<=n; i++){
    cin>>x;
    crt++;
    if(x>maxPrim){maxPrim=x; pozPrim=crt;}
    else if(x==maxPrim) pozUltim=crt;
   }
   cout<<pozPrim<<" "<<pozUltim;
    return 0;
}
