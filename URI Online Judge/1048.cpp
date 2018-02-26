#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
float a;

cin>>a;

if(a>=0 && a<=400.00){
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<a+(a*15)/100<<"\n";
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(a*15)/100<<"\n";
    cout<<"Em percentual: "<<15<<" %\n";}
if(a>=400.01 && a<=800.00){
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<a+(a*12)/100<<"\n";
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(a*12)/100<<"\n";
    cout<<"Em percentual: "<<12<<" %\n";}
if(a>=800.01 && a<=1200.00){
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<a+(a*10)/100<<"\n";
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(a*10)/100<<"\n";
    cout<<"Em percentual: "<<10<<" %\n";}
if(a>=1200.01 && a<=2000.00){
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<a+(a*7)/100<<"\n";
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(a*7)/100<<"\n";
    cout<<"Em percentual: "<<12<<" %\n";}
if(a>=2000.00){
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<a+(a*4)/100<<"\n";
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(a*4)/100<<"\n";
    cout<<"Em percentual: "<<4<<" %\n";}

    return 0;
}
