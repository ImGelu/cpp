#include <fstream>

using namespace std;

ifstream cin("subnumar.in");
ofstream cout("subnumar.out");

int main()
{
    int x, fr[100]={0}, maxim1=-1, maxim2=-1, maxim2i=-1, maxim1i=-1;

    while(cin){
        cin>>x;
        while(x){
            fr[x%100]++;
            if(fr[x%100]>maxim1) maxim1=fr[x%100], maxim1i=x%100;
            else if(fr[x%100]>maxim2){maxim1=maxim2; maxim2=fr[x%100]; maxim2i=x%100;}
            x/=10;
        }
    }

    cout<<maxim1i<<" "<<maxim2i;

    return 0;
}
