#include <iostream>
using namespace std;
int main(){
unsigned long long a,b,cnt=0,t=0;
while(cin>>a>>b){
if(a==0&&b==0) break;
cnt=0;t=0;
while(a>0&&b>0){
if((a%10)+(b%10)+t>9) cnt++;
t=(a%10+b%10+t)/10;
a=a/10;
b=b/10;
}
if (t+a%10+b%10>9) cnt++;
if(cnt==1)
cout<<"1 carry operation."<<endl;
else if (cnt>1)
cout<<cnt<<" carry operations."<<endl;
else
cout<<"No carry operation."<<endl;
}
return 0;
}