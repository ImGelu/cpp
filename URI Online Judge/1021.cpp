#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g;
    int h,i,j,k,l;
    double N;
    cin >>N;

    cout<<"NOTAS:"<<'\n';
    a=N/100;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    b=(N-a*100)/50;
    cout<<b<<" nota(s) de R$ 50.00"<<endl;
    c=(N-a*100-b*50)/20;
    cout<<c<<" nota(s) de R$ 20.00"<<endl;
    d=(N-a*100-b*50-c*20)/10;
    cout<<d<<" nota(s) de R$ 10.00"<<endl;
    e=(N-a*100-b*50-c*20-d*10)/5;
    cout<<e<<" nota(s) de R$ 5.00"<<endl;
    f=(N-a*100-b*50-c*20-d*10-e*5)/2;
    cout<<f<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<'\n';
    g=N-a*100-b*50-c*20-d*10-e*5-f*2;
    cout<<g<<" moeda(s) de R$ 1.00"<<endl;
    h=(N-a*100-b*50-c*20-d*10-e*5-f*2-g)/0.50;
    cout<<h<<" moeda(s) de R$ 0.50"<<'\n';
    i=(N-a*100-b*50-c*20-d*10-e*5-f*2-g-h*0.5)/0.25;
    cout<<i<<" moeda(s) de R$ 0.25"<<'\n';
    j=(N-a*100-b*50-c*20-d*10-e*5-f*2-g-h*0.5-i*0.25)/0.10;
    cout<<j<<" moeda(s) de R$ 0.10"<<'\n';
    k=(N-a*100-b*50-c*20-d*10-e*5-f*2-g-h*0.5-i*0.25-j*0.10)/0.05;
    cout<<k<<" moeda(s) de R$ 0.05"<<'\n';
    l=(N-a*100-b*50-c*20-d*10-e*5-f*2-g-h*0.5-i*0.25-j*0.10-k*0.05)/0.01;
    cout<<l<<" moeda(s) de R$ 0.01"<<'\n';

    return 0;
}
