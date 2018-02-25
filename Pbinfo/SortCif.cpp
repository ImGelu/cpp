#include <fstream>

using namespace std;

ifstream cin("sortcif.in");
ofstream cout("sortcif.out");

int sCif(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

void sortare(int n, int a[], int b[]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(b[i]>b[j]){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
}

int main(){

    int n, a[101], s[101];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        s[i]=sCif(a[i]);
    }

    sortare(n, a, s);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}