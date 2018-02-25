#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, y;

    cin>>n;

    cout<<3<<' '<<5<<'\n';
    n--;
    x = 5;
    y = x;
    while(n)
        {
            int sq = sqrt(x);
            bool prim = true;
            for(int d = 3; d <= sq; d += 2)
                if(x % d == 0)
                    {
                        prim = false;
                        break;
                    }
            if(prim)
                {
                    if(y == x - 2)
                        {
                            cout<<y<<' '<<x<<'\n';
                            y = x;
                            x += 2;
                            n--;
                        }
                    else
                        y = x;
                }
            x += 2;
        }
}
