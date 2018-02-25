#include <fstream>

using namespace std;

ifstream cin("zone.in");
ofstream cout("zone.out");

int main()
{
    int n, a[1000], par=0;

    cin>>n;

    for(int i=1; i<=3*n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        if(a[i]%2==0 && par==0){
                par=1;
            for(int j=3*n; j>=2*n; j--)
                if(a[j]%2==1){swap(a[j], a[i]); break;}
        }
    }

    for(int i=1; i<=3*n; i++) cout<<a[i]<<" ";
    return 0;
}