#include <iostream>
using namespace std;
int main () 
{

int n,i,a[10000]; 
cin>>n;
for (i=1;i<=n;i++)
cin>>a[i]; 
for (i=1;i<=n;i++)
{if (a[i]%2==0 && a[i]>0)
cout<<"EVEN POSITIVE"<<endl;
else if (a[i]%2!=0 && a[i]>0)
cout<<"ODD POSITIVE"<<endl;
else if (a[i]%2==0 && a[i]<0)
cout<<"EVEN NEGATIVE"<<endl;
else if (a[i]%2!=0 && a[i]<0)
cout<<"ODD NEGATIVE"<<endl;
else if(a[i]==0)
cout<<"NULL"<<endl;
}
return 0 ;
}