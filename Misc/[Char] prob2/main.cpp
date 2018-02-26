#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];

    cin.getline(s, 100);

    for(int i=0; i<s[i]; i++){
        if(i%3==0 && islower(s[i])) s[i] = toupper(s[i]);
    }

    for(int i=0; i<s[i]; i++)cout<<s[i];
    return 0;
}
