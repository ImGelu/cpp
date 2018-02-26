#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    string maxString="";
    unsigned maxim = 0;
    cin.getline(s,100);
    while(strlen(s)!=0){
    cin.getline(s, 100);
    if(strlen(s)>maxim){ maxim = strlen(s); maxString = s;}
    }
    cout<<maxString;
    return 0;
}
