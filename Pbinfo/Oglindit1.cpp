#include <iostream>

using namespace std;

void oglindit(int n, int &o){
    o=0;

    while(n){
        o=o*10+n%10;
        n/=10;
    }

}

int main()
{
    int n, o;

    cin>>n;

    oglindit(n, o);

    cout<<o;

    return 0;
}
