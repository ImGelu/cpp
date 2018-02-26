#include <iostream>
using namespace std;

bool ciur[1299900];

int main()
{
    int k, n, i;
    int cnt=0;
    cin>>k;

    for(i=2; i<=1299900 && cnt<k+1; ++i)
    {
        if(ciur[i]==0)
        {
            ++cnt;
            for(int j=i+i; j<=1299900/2; j=j+i)
                ciur[j]=1;
        }
    }

    cout<<(i-1)*(i-1);
    return 0;
}
