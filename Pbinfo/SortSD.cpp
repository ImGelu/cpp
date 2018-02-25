#include <iostream>
#include <math.h>

using namespace std;

int sDiv(int n){
	int s=1;

	for(int k=2; k*k<=n; ++k){
		int p=1;
		while(n%k==0){
			p=p*k+1;
			n/=k;
		}
		s*=p;
	}

	if(n>1) s*=1+n;

	return s;
}

void sortare(int n, int a[], int b[]){
    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(b[i]>b[j]){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
            else if(b[i]==b[j] && a[i]>a[j]) swap(a[i], a[j]);
        }
    }
}

int main(){

    int n, a[1001], s[1001];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        s[i]=sDiv(a[i]);
    }

    sortare(n, a, s);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}