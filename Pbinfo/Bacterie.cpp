#include <fstream>

using namespace std;

ifstream cin("bacterie.in");
ofstream cout("bacterie.out");

int main()
{
    long long n, m;

    cin>>n>>m;

    if(n>m) swap(n, m);

    cout<<n*m-n*(n+1)/2;


    return 0;
}