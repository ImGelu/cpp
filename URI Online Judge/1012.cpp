#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.14159
using namespace std;

int main(){
 float a,b,c;
cout<<"";
cout<<"";
cout<<"";
cin>>a>>b>>c;

 cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<(a*c)/2<<"\n";
 cout<<"CIRCULO: "<<fixed<<setprecision(3)<<pi * pow(c,2)<<"\n";
 cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<(c*(a+b))/2<<"\n";
 cout<<"QUADRADO: "<<fixed<<setprecision(3)<<pow(b,2)<<"\n";
 cout<<"RETANGULO: "<<fixed<<setprecision(3)<<a*b<<"\n";

 return 0;
}
