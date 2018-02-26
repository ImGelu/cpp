#include <iostream>
 
using namespace std;
 
int main()
{
    float i=0, j=1;
    while(i<=2.1){
            if( i<=2.1){
        cout<<"I="<<i<<" J="<<j<<'\n';
        cout<<"I="<<i<<" J="<<j+1<<'\n';
        cout<<"I="<<i<<" J="<<j+2<<'\n';
         i=i+0.2;
         j=j+0.2;
        }
    }
    return 0;
}
