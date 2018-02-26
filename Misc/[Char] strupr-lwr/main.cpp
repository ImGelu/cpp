#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    strupr(s);
    cout<<s<<'\n';
    strlwr(s);
    cout<<s<<'\n';
    return 0;
}
