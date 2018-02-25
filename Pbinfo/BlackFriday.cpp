#include <fstream>

using namespace std;

ifstream cin("blackfriday.in");
ofstream cout("blackfriday.out");

int main()
{
    long long n, before[10], after[11], maxim=1;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>before[i];
    for(int i=1; i<=n; i++) cin>>after[i];

    for(int i=2; i<=n; i++)
       if(before[maxim]*(before[i]-after[i])>(before[maxim]-after[maxim])*before[i]) maxim=i;

    cout<<maxim;

    return 0;
}