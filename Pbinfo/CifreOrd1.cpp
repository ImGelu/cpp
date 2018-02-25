#include <fstream>

using namespace std;

ifstream cin("cifreord1.in");
ofstream cout("cifreord1.out");

int fr[10];

int main(){

    int x, k=0;

    while(cin>>x){
        do{
            fr[x%10]++;
            x/=10;
        } while(x>0);
    }

    for(int i=9; i>=0; i--)
        for(int j=1; j<=fr[i]; j++){
            cout<<i<<" ";
            k++;
            if(k%20==0) cout<<endl;
        }

    return 0;
}