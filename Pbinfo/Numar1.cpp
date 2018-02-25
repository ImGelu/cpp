#include <iostream>

using namespace std;

int main()
{
    int a, nr;

    cin>>a;
    nr=(a%10)+(a/100)*10;
    cout<<nr*nr;

    return 0;
}
