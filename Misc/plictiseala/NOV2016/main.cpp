#include <iostream>

using namespace std;

int main()
{
    int t, k, a[500][500], cnt=1;

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>k;
        for(int j=1; j<=k; j++){
                cnt=0;
                a[j][j]=k;
                while(cnt!=k){
                a[j][j+cnt++]=k-cnt;
                a[j][j-cnt]=cnt;
                }
            for(int z=1; z<=k; z++){
                cout<<a[j][z]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
