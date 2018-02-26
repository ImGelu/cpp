#include <iostream>
 
using namespace std;
 
int main()
{
    float x, y, a=1;
 
while(a>0){
    cin>>x>>y;
if(x!=0 && y!=0){
    if(x<0 && y<0){
        cout<<"terceiro"<<'\n';
    }
    else{
        if (x<0 && y>0){
            cout<<"segundo"<<'\n';
        }
        else{
            if (x>0 && y<0){
                cout<<"quarto"<<'\n';
            }
            else{
                if (x>0&&y>0){
                    cout<<"primeiro"<<'\n';
                }
 
            }
        }
    }
 
}else {--a;}}
 
    return 0;
}