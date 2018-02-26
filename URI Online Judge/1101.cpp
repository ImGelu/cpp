#include <iostream>
 
using namespace std;
 
int main()
{
    int n, i, m,  a=1;
    int summ=0;
    while(true) {
        cin>>n>>m;
        if( m>0 && n>0){
            if(n<m)
                for(i=n; i<=m; i++){
                    summ=summ+i;
                    cout<<i<<" ";
                }
            else
                for(i=m; i<=n; i++){
                    summ=summ+i;
                    cout<<i<<" ";
                }
            cout<<"Sum="<<summ<<'\n';
            summ=0;
    }
    else
        break;
    }
    return 0;
}