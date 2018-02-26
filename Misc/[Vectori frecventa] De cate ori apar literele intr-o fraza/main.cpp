//de cate ori apare fiecare litera intr-o fraza;

#include <iostream>
#include <string.h>

using namespace std;

    int fr[1000];

int main()
{
    char s[1000], sep[]=",.;- !?1234567890";

    cin.getline(s, 1000);

    for(int i=0; i<s[i]; ++i)
        if(!strchr(sep, s[i])) fr[(int)s[i]-96]++;

    for(int i=1; i<=26; ++i){
        cout<<(char)(96+i)<<": "<<fr[i]<<"\n";
    }

    //cout<<(int)s[0]-96;
    return 0;
}
