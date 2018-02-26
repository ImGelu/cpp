#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,n;
    cin>>n;
    for(int i=1; i<=n; i++){
    cin>>a>>b;
    if(b==0)
        cout<<"divisao impossivel\n";
    else
        cout<<fixed<<setprecision(1)<<(float) a/b<<"\n";}
    return 0;
}
