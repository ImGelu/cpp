#include <iostream>

using namespace std;

int main()
{
    int iStart , iEnd, iPeriod;
    cin>>iStart>>iEnd;

    if(iStart>iEnd){
        iPeriod = iEnd+24-iStart;
        cout<<"O JOGO DUROU "<<iPeriod<<" HORA(S)"<<'\n';
    }
    else{
        iPeriod = iEnd - iStart;
        cout<<"O JOGO DUROU "<<iPeriod<<" HORA(S)"<<'\n';
    }

    return 0;
}
