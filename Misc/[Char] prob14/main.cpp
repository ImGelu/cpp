#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    int nr=0;
    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++){
        if(isdigit(s[i])) cout<<a[i];
    }
    return 0;
}
