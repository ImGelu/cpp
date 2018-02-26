#include <iostream>

using namespace std;

int main()
{
int a, b, sum=0, aux;
cin>>a;
cin>>b;

if(a>b){
aux=a;
a=b;
b=aux;
}
for(int i=a; i<=b; i++){
if(i%13 != 0){
sum=sum+i;
}
}
cout<<sum<<'\n';
return 0;
}