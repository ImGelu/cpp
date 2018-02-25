#include <fstream>

using namespace std;

ifstream cin("halfsort1.in");
ofstream cout("halfsort1.out");

void citire(int &n, int a[]){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
}

void afisare(int n, int a[]){
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}

void sortare(int a[], int &n){

    bool ok2=true;
    int j2=0;
    while(ok2){
        ok2=false;
        j2++;
        for(int i=1; i<(n/2)-j2+1; i++)
            if(a[i]>a[i+1]) swap(a[i], a[i+1]), ok2=true;
    }

    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=(n/2)+1; i<n-j+1; i++)
            if(a[i]<a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}

int main()
{
    int a[1000], n;

    citire(n,a);
    sortare(a,n);
    afisare(n,a);

    return 0;
}