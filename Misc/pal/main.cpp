#include <iostream>

using namespace std;

int fr[10];

void cifre(int n, int &b){
    b=0;
    while(n){
        fr[n%10]++;
        n=n/10;
    }
    for(int i=1; i<=9; i++){
        for(int j=1; j<=fr[i]; j++)
            b=b*10+i;
            if(b<9)
                for(int z=1; z<=fr[0]; z++) b=b*10;
    }
}

int main()
{
    int n, b, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        cifre(x, b);
        if(x==b) cout<<x<<" ";
    }

    return 0;
}
