#include <iostream>
using namespace std;

int main()
{
    float v[100];

    for(int i=0; i<100; i++){
        cin>>v[i];
     if(v[i]<=10)
        cout<<"A["<<i<<"] = "<<v[i]<<"\n";

    }


    return 0;
}
