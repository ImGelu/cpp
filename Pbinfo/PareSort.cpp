#include <fstream>

using namespace std;

ifstream cin("paresort.in");
ofstream cout("paresort.out");

void sortare(int n, int a[]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i], a[j]);
}

int main(){

    int n, x, cnt=1, a[10000];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0) a[cnt++]=x;
    }

    cnt--;

    if(cnt==0) cout<<"nu exista";
    else{
    sortare(cnt, a);

    cout<<cnt<<"\n";
    for(int i=1; i<=cnt; i++) cout<<a[i]<<" ";
    }

    return 0;
}