#include <iostream>

using namespace std;

int main()
{
    int ora,st_min,fin_ora,fin_min,tota_st,total_fin,total,ore_t,min_t,total_st,st_ora;
    cin>>st_ora>>st_min>>fin_ora>>fin_min;
    total_st=st_ora*60+st_min;
    total_fin=fin_ora*60+fin_min;
    if(total_st<total_fin)  total=total_fin-total_st;
    else total=(24*60-total_st+total_fin);
    ore_t=total/60;
    min_t=total%60;
    cout<<"O JOGO DUROU "<<ore_t<<" HORA(S)"<<" E "<<min_t<<" MINUTO(S)"<<endl;
    return 0;


}
