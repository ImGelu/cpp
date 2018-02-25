#include <iostream>

using namespace std;

int sum_cifra_control(int a, int b){
    int k=0;
    if(a>b) swap(b, a);

    if(a==9){
        for(int i=a; i<=b; i++)
            if(i%9==0) k++;
    }

    else for(int i=a; i<=b; i++)
        if(i%9==a) k++;

    return k;
}

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<sum_cifra_control(a, b);
    return 0;
}
