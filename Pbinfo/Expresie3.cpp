#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, s=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2!=0) s=s+(i*(i+1));
        else s=s-(i*(i+1));
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}
