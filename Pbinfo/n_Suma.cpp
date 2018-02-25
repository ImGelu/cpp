#include <fstream>
#include <math.h>
using namespace std;
ifstream cin("n_suma.in");
ofstream cout("n_suma.out");

int main()
{
    int n;
    double x, s=0;

    cin>>n;
    for(int i=1; i<=n; i++){
    cin>>x;
    s=s+x;
    }
    cout<<s;
    return 0;
}
