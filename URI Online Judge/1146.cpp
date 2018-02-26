#include <iostream>

using namespace std;

int main()
{
int a;
cin>>a;
while(a!=0){
for(int i=1; i<=a; i++){
if(i<a){ cout<<i<<" ";}
else{if(i==a){cout<<i<<'\n';}}
}
cin>>a;
}
return 0;
}