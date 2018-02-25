#include <fstream>

using namespace std;

ifstream cin("nrlipsa2.in");
ofstream cout("nrlipsa2.out");

int main()
{
    int x, v[201]={0}, *fr={0}, ok=0;

    fr=v+100;

    while(cin){
        cin>>x;
        if(x>=-100 && x<=100) fr[x]++;
    }

    for(int i=-100; i<=100; i++)
        if(!fr[i]){
        cout<<i;
        ok=1;
        break;
    }

    if(!ok) cout<<"nu exista";

    return 0;
}