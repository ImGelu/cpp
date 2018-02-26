#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], vocale[]="aeiouAEIOU";
    cin.getline(s, 100);

    for(int i=0; s[i]; i++)
        if(strchr(vocale,s[i]) && strchr(vocale, s[i+1]) && isalpha(s[i]) && isalpha(s[i+1])) cout<<s[i]<<s[i+1]<<" ";
    return 0;
}
