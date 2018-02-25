#include <iostream>

using namespace std;

int main()
{
    int x, y, k=0, prec=-1;

    while(x!=0){
        prec=x%10;
        cin>>x;
        if(x%10==prec && x!=0) k++;
    }
    cout<<k;
    return 0;
}
