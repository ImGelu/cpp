#include <iostream>

using namespace std;

int main()
{
int x,s=0;

while(cin>>x && x){
    s=0;
if(x%2!=0){
    x++;}
for(int i=x; i<=x+9; i++){
    if(i%2==0)
    s+=i;}
cout<<s<<"\n";}
return 0;
}
