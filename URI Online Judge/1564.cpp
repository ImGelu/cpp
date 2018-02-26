#include <iostream>

using namespace std;

int main()
{
int c;
cin>>c;
while(!cin.eof()){
    if(c==0)
        cout<<"vai ter copa!\n";
    else
        cout<<"vai ter duas!\n";
    cin>>c;

}
return 0;
}
