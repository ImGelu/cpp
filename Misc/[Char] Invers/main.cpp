#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];

    cin.getline(s, 100, 'f');

    strrev(s);
    cout<<s;
    return 0;
}
