#include <fstream>

using namespace std;

ifstream cin("puterik.in");
ofstream cout("puterik.out");

bool estePutere(int n, int k){
    while(n%k==0) n/=k;

    if(n==1) return true;
    else return false;
}

void sortare(int n, int a[]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i], a[j]);
}

int main(){

    int n, x, k, cnt=1, a[10000];

    cin>>n>>k;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(estePutere(x, k)) a[cnt++]=x;
    }

    cnt--;

    sortare(cnt, a);

    for(int i=1; i<=cnt; i++) cout<<a[i]<<" ";

    return 0;
}