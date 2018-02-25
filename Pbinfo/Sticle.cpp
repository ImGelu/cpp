#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    double cat, fl;
    cin>>a>>b;
    cat=(double)b/a;
    fl=cat-floor(cat);
    if(fl>0.5) cout<<floor(cat)+1;
    else cout<<floor(cat);
    return 0;
}
