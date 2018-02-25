#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double B, b, l, lMic, h, diag, frag;

    cin>>B>>b>>l;

    lMic = (B-b)/2;
    h = sqrt((l*l)-(lMic*lMic));
    frag = (double)lMic+b;
    diag = sqrt((frag*frag) + (h*h));

    cout<<diag;
    return 0;
}
