#include <iostream>

using namespace std;

int main()
{
    int k=0, x;

    while(x!=0){
        cin>>x;
        if(x%2==0) k++;

    }
    if(k-1==0) cout<<"NU EXISTA";
    else cout<<k-1;
    return 0;
}
