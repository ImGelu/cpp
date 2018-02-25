#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int f(int n, int p){

    if(n){
        if(n%2==1) cout<<p<<" ";
        f(n/2, p*2);
    }
}

int main()
{
    int n, p;

    cin>>n;

    f(n, 1);

    return 0;
}

int main(){

    return 0;
}