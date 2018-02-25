#include <iostream>

using namespace std;

int nr_cif(int n, int k){
    int cnt=0;

    while(n){
        if(n%10==0) n/=10;
    else{
        if(k%(n%10)==0) cnt++;
        n/=10;
    }
    }
    return cnt;
}

int main()
{
    int n, k;

    cin>>n>>k;

    cout<<nr_cif(n, k);
    return 0;
}
