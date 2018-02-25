#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, s=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        s=s+pow(i, i);
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}
