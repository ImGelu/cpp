#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, s=0, k=1;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(sqrt(i)==(int)sqrt(i)) s=s+i;
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}
