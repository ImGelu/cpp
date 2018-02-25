#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("maxim.in");
ofstream cout("maxim.out");

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<max(a,b);
    return 0;
}
