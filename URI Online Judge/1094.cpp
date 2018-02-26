#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
 
int main()
{
    int n, i, iCase;
    char cPet;
    double iRats=0, iFrogs=0, iRabbit=0, iPets=0;
    double pRats=0, pFrog=0, pRabbit=0;
 
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>iCase>>cPet;
        switch(cPet){
        case 'R': iRats = iRats + iCase;
        break;
        case 'C': iRabbit = iRabbit +iCase;
        break;
        case 'S': iFrogs = iFrogs + iCase;
        break;
        }
        iPets = iPets + iCase;
    }
        cout<<"Total: "<<iPets<<" cobaias"<<'\n';
        cout<<"Total de coelhos: "<<iRabbit<<'\n';
        cout<<"Total de ratos: "<<iRats<<'\n';
        cout<<"Total de sapos: "<<iFrogs<<'\n';
        pRats = (iRats / iPets) * 100;
        pRabbit = (iRabbit / iPets) * 100;
        pFrog = (iFrogs / iPets) * 100;
 
 
        cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<pRabbit<<" %"<<'\n';
        cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<pRats<<" %"<<'\n';
        cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<pFrog<<" %"<<'\n';
 
 
    return 0;
}