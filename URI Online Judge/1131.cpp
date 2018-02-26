#include <iostream>
 
using namespace std;
 
int main()
{
    int iInter, iGremio, iYesNo=1;
    int mInter=0, mGremio=0, Grenais=0, mDraw=0;
 
    while(iYesNo==1){
        cin>>iInter>>iGremio;
        if(iInter>iGremio){mInter++;}
        else{if(iGremio>iInter){mGremio++;}
        else{mDraw++;}}
        Grenais++;
        cout<<"Novo grenal (1-sim 2-nao)"<<'\n';
        cin>>iYesNo;
    }
    cout<<Grenais<<" grenais"<<'\n';
    cout<<"Inter:"<<mInter<<'\n';
    cout<<"Gremio:"<<mGremio<<'\n';
    cout<<"Empates:"<<mDraw<<'\n';
    if(mInter>mGremio){cout<<"Inter venceu mais"<<'\n';}
    else{if(mInter<mGremio){cout<<"Gremio venceu mais"<<'\n';}
    else{cout<<"Nao houve vencedor"<<'\n';}}
 
    return 0;
}