#include <iostream>

using namespace std;

void P(int &n, int c){
    int x=0, p=1;
    while (n)
    {
        if (n%10!=c)
        {
             x=n%10*p+x;
             p=p*10;
        }
        n/=10;
    }
    n=x;

}


int main()
{
    int n, c;

    cin>>n>>c;

    P(n, c);

    cout<<n;
    return 0;
}
