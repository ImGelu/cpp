#include <iostream>
using namespace std;

int main()
{
    int x,alc=0,gas=0,die=0;
    string c="MUITO OBRIGADO";
cin>>x;
while(x!=4){
cin>>x;
if(x==1)
alc++;
else if(x==2)
gas++;
else if(x==3)
die++;
}
if(x==4)
    cout<<c<<"\nAlcool: "<<alc<<"\nGasolina: "<<gas<<"\nDiesel: "<<die<<"\n";
    return 0;
}
