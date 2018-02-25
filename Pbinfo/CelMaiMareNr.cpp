#include <iostream>

using namespace std;


int cmmnr(int n){
    int nr=0, fr[10]={0,0,0,0,0,0,0,0,0,0};

    while(n) fr[n%10]++, n/=10;

    for(int i=9; i>=0; i--)
        if(fr[i]!=0)
            for(int j=1; j<=fr[i]; j++)
                nr=nr*10+i;

    return nr;
}

int main()
{
    int n;

    cin>>n;

    cout<<cmmnr(n);
    return 0;
}
