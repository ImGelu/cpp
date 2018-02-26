#include <iostream>

using namespace std;

int scif(int n){

if(n==0) return 0;
else return n%10+scif(n/10);

}

int main()
{
    int n;
    cin>>n;
    cout<<scif(n);
    return 0;
}
