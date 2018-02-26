#include <iostream>

using namespace std;

int main(){
double a,b,c,aux;
cin>>a>>b>>c;
    if(b>a && b>c){
aux=a;
a=b;
b=aux;}
    else if (c>b && c>a){
aux=a;
a=c;
c=aux;}

if (a>=b+c){
    cout<<"NAO FORMA TRIANGULO\n";}
else if((a*a)==(b*b)+(c*c)){
    cout<<"TRIANGULO RETANGULO\n";}
else if((a*a)>(b*b)+(c*c)){
    cout<<"TRIANGULO OBTUSANGULO\n";}
else if((a*a)<(b*b)+(c*c)){
    cout<<"TRIANGULO ACUTANGULO\n";}

if(a==b && b==c){
    cout<<"TRIANGULO EQUILATERO\n";}
else if (a==b || a==c || b==c){
    cout<<"TRIANGULO ISOSCELES\n";}
}
