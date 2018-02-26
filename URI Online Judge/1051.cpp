#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float a, b, c, d, taxafinala;
cin>>a;
if(a<=2000.00){
cout<<"Isento"<<'\n';
}
else{
if(a>2000.00 && a<=3000.00){
b = ((a-2000) * 8) / 100;
cout<<"R$ "<<fixed<<setprecision(2)<<b<<endl;
}
else{
if(a>3000.00 && a<=4500){
b = (1000 * 8) / 100;
c = ((a-3000) * 18) / 100;
taxafinala = b + c;
cout<<"R$ "<<fixed<<setprecision(2)<<taxafinala<<endl;
}
else{
if(a>4500){
b = (1000 *8)/100;
c = (1500 *18)/100;
d = ((a-4500) *28)/100;
taxafinala = b + c + d;
cout<<"R$ "<<fixed<<setprecision(2)<<taxafinala<<'\n';
}
}
}
}
system("pause");
return 0;
}