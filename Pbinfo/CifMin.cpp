#include <iostream>

using namespace std;

int fr[10];

int main(){

    int n, x, k=1, ok=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        int cifMin=10;
        cin>>x;
        while(x){
            if(x%10<cifMin) cifMin=x%10;
            x=x/10;
        }
        fr[cifMin]++;
    }

    for(int i=1; i<=9; i++)
        for(int j=1; j<=fr[i]; j++){
            ok++;
            cout<<i;
            if(ok==1)
                for(int z=1; z<=fr[0]; z++) cout<<0;

        }

    return 0;
}