#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int n,t;
double s=0, av, a[1000], procent, cnt=0;
cin>>t; 
for (int x=1; x<=t; ++x){
cin>>n;
for (int i=1; i<=n; ++i){
cin>>a[i];
s+=a[i];
}
av=s/n *1.00;
for (int i=1; i<=n; ++i){
if(a[i]>av) ++cnt;
}
procent = (cnt/n)*100;
cout<<fixed<<setprecision(3)<<procent<<"%\n";
s=0; cnt =0;
}
return 0;
}