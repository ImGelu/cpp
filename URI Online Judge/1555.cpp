#include <iostream>
#include <math.h>

using namespace std;

int r(int x, int y){
return pow((3*x),2)+ pow(y,2);
}

int b(int x, int y){
return 2*(pow(x,2))+ pow((5*y),2);
}

int c(int x, int y){
return (-100*x)+pow(y,3);
}

int main()
{
    int x, y, n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x>>y;
    if((r(x,y))>(b(x,y)) && (r(x,y))>(c(x,y)))
        cout<<"Rafael ganhou\n";
   else if((b(x,y))>(r(x,y)) && (b(x,y))>(c(x,y)))
        cout<<"Beto ganhou\n";
   else
        cout<<"Carlos ganhou\n";
    }
    return 0;
}
