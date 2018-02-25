#include <fstream>

using namespace std;

ifstream cin("numere8.in");
ofstream cout("numere8.out");

int main()
{
    static int fr[1000000], x;

    while(cin){
        cin>>x;
        if(x<=9999)
        fr[x]++;
    }

    for(int i=9999; i>=1; --i){
        if(fr[i]==0) cout<<i<<" ";
    }

    return 0;
}
}