#include <iostream>

using namespace std;

int main(){
long int n,i,pos,min;

cin>>n;

long int v[n];

cin>>v[0];
pos=0;
min=v[0];

for(i=1;i<n;i++){
cin>>v[i];
if(v[i]<min){
pos=i;
min=v[i];
}
}
cout<<"Menor valor: "<<min<<"\n";
cout<<"Posicao: "<<pos<<"\n";
}
