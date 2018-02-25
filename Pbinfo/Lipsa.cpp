#include <fstream>

using namespace std;

ifstream cin("lipsa.in");
ofstream cout("lipsa.out");

int main()
{
    int s_tot=0, s_available=0, n, x;
    cin>>n;
    for(int i=1; i<=n; i++){
        s_tot+=i;
    }
    for(int i=1; i<=n-1; i++){
        cin>>x;
        s_available+=x;
    }
    cout<<s_tot-s_available;
    return 0;
}