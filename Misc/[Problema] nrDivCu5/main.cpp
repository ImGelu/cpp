//Sa se afle cate numere divizibile cu 5 sunt in intervalul [1, n]
#include <iostream>

using namespace std;

int main()
{
    int n, cinci=0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%5==0) cinci++;
    }

    cout<<cinci;

    return 0;
}
