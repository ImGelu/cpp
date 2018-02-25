#include <fstream>

using namespace std;

ifstream cin("elfii.in");
ofstream cout("elfii.out");

int main()
{
    int x, y, z, k=0, maxim=-1, sol;

    cin>>x>>y>>z;

    if(x%2==1 && y%2==1 && z%2==1 || x==0 && y==0 && z==0) cout<<"Poate data viitoare!";
    else{

    sol=(x*10+y)*10+z;
    swap(x, y);
    if(sol>maxim && sol%2==0) maxim=sol;
    if(sol>99 && sol<1000 && sol%2==0) k++;

    sol=(x*10+y)*10+z;
    swap(y, z);
    if(sol>maxim && sol%2==0) maxim=sol;
    if(sol>99 && sol<1000 && sol%2==0) k++;

    sol=(x*10+y)*10+z;
    swap(x, z);
    if(sol>maxim && sol%2==0) maxim=sol;
    if(sol>99 && sol<1000 && sol%2==0) k++;

    sol=(x*10+y)*10+z;
    swap(x, y);
    if(sol>maxim && sol%2==0) maxim=sol;
    if(sol>99 && sol<1000 && sol%2==0) k++;

    sol=(x*10+y)*10+z;
    swap(y, z);
    if(sol>maxim && sol%2==0) maxim=sol;
    if(sol>99 && sol<1000 && sol%2==0) k++;

    sol=(x*10+y)*10+z;
    if(sol>maxim && sol%2==0) maxim=sol;
    if(sol>99 && sol<1000 && sol%2==0) k++;

    cout<<k<<"\n"<<maxim;
    }

    return 0;
}