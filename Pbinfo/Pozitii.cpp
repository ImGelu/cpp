#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int k=0;
    char c[256], vocale[]="aeiou", consoane[]="bcdfghjklmnpqrstvwxzy";

    cin.getline(c, 256);


    for(int i=1; i<strlen(c)-1; i++)
        if(strchr(vocale, c[i]) && strchr(consoane, c[i-1]) && strchr(consoane, c[i+1])) k++;

    cout<<k;

    return 0;
}