#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int maxim=INT_MIN, x, gasit=0;
    cin>>x;
    if(x==0) cout<<"NU EXISTA";
    else{
        while(x!=0){
        cin>>x;
        if(x>maxim) maxim=x;
        }

    cout<<maxim;
    }
    return 0;
}
