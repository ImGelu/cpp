#include <iostream>
#include <string.h>
using namespace std;
int main()
{
// caracterele cifra
//isdigit s[i]>='0' **s[i]<='9'
    char s[100];
    cin.getline(s,100);
    for(int i=0; i<s[i]; i++)
        if (isdigit(s[i])) cout<<s[i];
// isupper islower isalpha
//eliminam literele mari
    for(int i=0; s[i]; i++)
        while(isupper(s[i])) strcpy(s+i,s+i+1);
    cout<<"\n s fara litere mari="<<s;
    return 0;
}
