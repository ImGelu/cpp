#include <fstream>

using namespace std;

ifstream cin("pareimpare.in");
ofstream cout("pareimpare.out");

int main()
{
    int x, fr[105]={0};

    while(cin){
        cin>>x;
        fr[x]++;
    }

    for(int i=0; i<100; i++)
        if(i%2==1 && fr[i]!=0) cout<<i<<" ";

    cout<<"\n";

    for(int i=99; i>=0; i--)
        if(i%2==0 && fr[i]!=0) cout<<i<<" ";

    return 0;
}