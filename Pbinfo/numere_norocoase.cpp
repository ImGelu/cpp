#include <iostream>

using namespace std;

int norocoase(int &a, int b){
    int k=0;

    if(a%2==0) a++;
    if(b%2==0) b--;

    for(int i=a; i<=b; i+=2) k++;

    return k;
}

int main()
{
    int a, b;

    cin>>a>>b;

    cout<<norocoase(a,b);
    return 0;
}
