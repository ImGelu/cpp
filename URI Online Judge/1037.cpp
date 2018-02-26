#include <iostream>

using namespace std;

int main()
{
float a;
cin>>a;

    if(a>=0 and a<=25.0000)
cout<<"Intervalo [0,25]"<<"\n";
    else if(a>=25.0001 and a<=50.0000)
cout<<"Intervalo (25,50]"<<"\n";
    else if(a>=50.0001 and a<=75.0000)
cout<<"Intervalo (50,75]"<<"\n";
    else if(a>=75.0001 and a<=100.0000)
cout<<"Intervalo (75,100]"<<"\n";

else

cout<<"Fora de intervalo"<<"\n";

    return 0;
}
