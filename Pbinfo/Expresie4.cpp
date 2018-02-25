#include <iostream>

using namespace std;

int main()
{
    int n, k=1, nr, s=0;
    cin>>n;
    nr=n;

    while(nr>0){
        s+=k*nr;
        k++;
        nr--;
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}
