//#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("nrlipsa.in");
ofstream cout("nrlipsa.out");

int main()
{
    int x, fr[10000], k=1;

    while(cin){
        cin>>x;
        if(x<=999 && x>=100) fr[x]++;
    }

    for(int i=999; i>=100; i--)
        if(k<=2 && fr[i]==0) cout<<i<<" ", k++;

    if(k==1) cout<<"NU";

    return 0;
}