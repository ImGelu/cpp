#include <iostream>
using namespace std;

int main()
{
    int v[10];

    for(int i=0; i<10; i++){
        cin>>v[i];
    if(v[i]<=0) v[i]=1;
    else
        v[i]=v[i];
    cout<<"X["<<i<<"] = "<<v[i]<<"\n";}


    return 0;
}
