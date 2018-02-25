#include <fstream>

using namespace std;

ifstream cin("palindrom_ciclic.in");
ofstream cout("palindrom_ciclic.out");

void citire(int &n, int a[]){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
}

void valid(int ok, int k){
    if(ok==1) cout<<"DA "<<k;
    else cout<<"NU";
}

bool palindrom(int a[], int n){
    for(int i=1; i<=n/2; i++)
        if(a[i]!=a[n-i+1]) return false;
    return true;
}

int permutare(int &k, int n, int a[], int &ok){
    ok=0;
    if(palindrom(a, n)) ok=1;
    else
    while(k<n){
    k++;
    a[n+1]=a[1];

    for(int i=1; i<=n; i++) a[i]=a[i+1];
    if(palindrom(a, n)) {ok=1; break;}
    }

}

int main()
{
    int n, a[1005], nr=0, p=1, k=0, ok=0;

    citire(n, a);
    permutare(k, n, a, ok);
    valid(ok, k);

    return 0;
}