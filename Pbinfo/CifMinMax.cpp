#include <iostream>

using namespace std;

void cifminmax(int n, int &mare, int &mica){
    mare=0, mica=9;

    if(n==0) mica=0;

    while(n){
        if(n%10<=mica) mica=n%10;
        if(n%10>=mare) mare=n%10;
        n/=10;
    }
}

int main()
{
    int n, mare, mica;

    cin>>n;

    cifminmax(n, mare, mica);

    cout<<mare<<" "<<mica;
    return 0;
}
