#include <iostream>
using namespace std;
int main()
{
	unsigned long long n,i,nr1,nr2;
	cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>nr1>>nr2;
        if(nr2&&nr1>18446744073709551615ULL/nr2)
            cout<<"Overflow!"<<'\n';
        else
            cout<<nr1*nr2<<'\n';
    }
    return 0;
}