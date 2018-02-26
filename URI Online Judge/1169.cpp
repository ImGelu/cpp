#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(int i=0; i<n; i++){
        int s;
    unsigned long long int g,M;
    cin>>s;
    g=pow(2,s)-1;
    M=(g/12.0)/1000;
    cout<<M<<" kg"<<'\n';}

    return 0;
}
