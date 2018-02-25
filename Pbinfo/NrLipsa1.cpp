#include <fstream>

using namespace std;

ifstream cin("nrlipsa1.in");
ofstream cout("nrlipsa1.out");

int main()
{
    int x, fr[100000], unu=0, doi=0;

    while(cin){
        cin>>x;
        if(x>=10 && x<=98) fr[x]++;
    }

    for(int i=10; i<=98; i++)
        if(i%2==0 && !fr[i]){
        unu=i;
        break;
    }

    for(int i=98; i>=10; i--)
        if(i%2==0 && (!fr[i]) && i!=unu){
        doi=i;
        break;
    }

    if(unu && doi) cout<<unu<<" "<<doi;
    else cout<<"nu exista";

    return 0;
}