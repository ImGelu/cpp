#include <fstream>

using namespace std;

ifstream cin("sortare_divizori.in");
ofstream cout("sortare_divizori.out");

int nrDiv(int n){
    int div=2, nrdiv=0, p=1;
    while(n>1){
        nrdiv=0;
        while(n%div==0){
            n/=div;
            nrdiv++;
        }
        if(nrdiv) p=p*(nrdiv+1);
        div++;
        if(div*div>n) div=n;
    }
    return p;
}

void sortare(int n, int a[], int b[]){
    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(b[i]<b[j]){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
            if(b[i]==b[j] && a[i]>a[j]) swap(a[i], a[j]);
        }
    }
}

int main(){

    int n, a[1001], div[1001];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        div[i]=nrDiv(a[i]);
    }

    sortare(n, a, div);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";


    return 0;
}