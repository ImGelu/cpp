#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    int note=0,y;
    double x,s=0;
    while(note<2)
{
        cin>>x;
        if(x<0 || x>10)
        cout<<"nota invalida"<<endl;
        else
        {
        s=s+x;
        note++;
        }
}
    cout<<fixed<<setprecision(2)<<"media = "<<s/2<<endl;
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>y;
    while(y)
    {
  
        while(y!=1 && y!=2)
        {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>y;
        }
        if(y==1){
          
        s=0;note=0;
        while(note<2)
{
        cin>>x;
        if(x<0 || x>10)
        cout<<"nota invalida"<<endl;
        else
        {
        s=s+x;
        note++;
        }
}
    cout<<fixed<<setprecision(2)<<"media = "<<s/2<<endl;
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>y;}
    else if(y==2) break;
          
          
    }
      
    return 0;
}
