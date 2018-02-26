#include <iostream>

using namespace std;

int Ackerman(int m, int n){

if(m==0) return n+1;
else if(m>0 && n==0) return Ackerman(m-1, 1);
else if(m>0 && n>0) return Ackerman(m-1, Ackerman(m,n-1));

}

int main()
{
    int n, m;

    cin>>n>>m;
    cout<<Ackerman(n, m);
    return 0;
}
