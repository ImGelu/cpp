#include <iostream>

using namespace std;

int powz(int a, int b){

if(b==0) return 1;
else return a*powz(a,b-1);

}

int main()
{
    int n, a, b;
    cin>>a>>b;
    cout<<powz(a, b);
    return 0;
}
