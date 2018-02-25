//https://stackoverflow.com/a/7483820/6752176
#include <iostream>

using namespace std;

int main()
{
    int n, m, a[1001], b[1001], ok;

    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];

    cin>>m;
    for(int i=1;i<=m;i++) cin>>b[i];

    if(m>n) cout<<"NU";

    else{
        for(int i=1; i<=n-m+1; i++){ //n-m+1 pt ca daca merge mai departe e imposibil sa mai gasesti b (depaseste nr elementelor lui b)
            ok=1;                    //daca a[1]=b[1] continua cautarea mai departe, daca nu gaseste pana la sfarsit trece la a[2]=b[1].. etc
            for(int j=1; j<=m; j++)
                if(a[i+j-1]!=b[j]) ok=0;

            if(ok){
                cout<<i;
                break;
            }
        }

        if(ok==0) cout<<"NU";
    }

    return 0;
}
