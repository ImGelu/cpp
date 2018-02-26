#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    int mici=0, mari=0, nr=0;

    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++)
        if(isupper(s[i])) mari++;
        else if(islower(s[i])) mici++;
        else if(isalnum(s[i])) nr++;

    cout<<mici<<" "<<mari<<" "<<nr;
    return 0;
}
