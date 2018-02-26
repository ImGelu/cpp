#include <iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,S;
cin>>S;

cout<<S<<"\n";
a=S/100;
cout<<a<<" nota(s) de R$ 100,00\n";

b=(S-a*100)/50;
cout<<b<<" nota(s) de R$ 50,00\n";

c=(S-a*100-b*50)/20;
cout<<c<<" nota(s) de R$ 20,00\n";

d=(S-a*100-b*50-c*20)/10;
cout<<d<<" nota(s) de R$ 10,00\n";

e=(S-a*100-b*50-c*20-d*10)/5;
cout<<e<<" nota(s) de R$ 5,00\n";

f=(S-a*100-b*50-c*20-d*10-e*5)/2;
cout<<f<<" nota(s) de R$ 2,00\n";

g=S-a*100-b*50-c*20-d*10-e*5-f*2;
cout<<g<<" nota(s) de R$ 1,00\n";

return 0;

}
