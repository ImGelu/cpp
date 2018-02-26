#include <iostream>

using namespace std;

long long rez;

int cnt[1000000];

int main()
{

    int i, j, N;
    cin>>N;

    for(i=2; i<=N; i++)
    {
        cnt[i]=i-1-cnt[i];
        for(j=2; j*i<=N; j++)
            cnt[i*j]=cnt[i]+cnt[i*j];
    }

    for(i=2; i<=N; i++)
        rez=rez+(long long)cnt[i]*2;
    rez++;

    cout<<rez;

    return 0;
}
