#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

int a,b,c,d,e,par=0,impar=0,poz=0,neg=-1;
cin>>a>>b>>c>>d>>e;
if(a>0){
poz++;}
else
neg++;
if(b>0){
poz++;}
else
neg++;
if(c>0){
poz++;}
else
neg++;
if(d>0){
poz++;}
else
neg++;
if(e>0){
poz++;}
else
neg++;

if(a%2==0){
par++;}
else
impar++;
if(b%2==0){
par++;}
else
impar++;
if(c%2==0){
par++;}
else
impar++;
if(d%2==0){
par++;}
else
impar++;
if(e%2==0){
par++;}
else
impar++;

cout<<par<<" valor(es) par(es)\n"<<impar<<" valor(es) impar(es)\n"<<poz<<" valor(es) positivo(s)\n"<<neg<<" valor(es) negativo(s)\n";

}
