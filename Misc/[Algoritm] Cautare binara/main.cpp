#include <iostream>

using namespace std;

int main()
{
    int v[100], x, n, a=1, b, gasit=0, mij;

    cin>>n>>x;
    b=n;

    for(int i=1; i<=n; i++) cin>>v[i];

    while(gasit==0 && a<=b){

        mij=(a+b)/2;
        if(x==v[mij]){ cout<<"Gasit pe pozitia: "<<mij; gasit=1; break;}
        else if(x>v[mij]) a=mij+1;
        else b=mij-1;
    }
    if(gasit==0) cout<<"Nu s-a gasit elementul";
    return 0;
}
