#include <iostream>

using namespace std;

int main()
{
    int n, k=1, rez;

    cin>>n;

    for(int m=2; m<=n; m++){
    k=1;
    rez=n/m-(m+1)/2;

    if(rez<0) break;

    if((double)n/m-(double)(m+1)/2==(int)n/m-(m+1)/2){
        while(++k<=m+1){
            cout<<++rez<<" ";
        }
        cout<<endl;
    }
}

    return 0;
}