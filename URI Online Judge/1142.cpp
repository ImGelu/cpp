#include <iostream>

using namespace std;

int main()
{
int i=1, n;
cin>>n;

while(n>0){
cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<'\n';
i=i+4;
n--;
}
return 0;
}