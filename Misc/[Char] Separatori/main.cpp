#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100],sep[]=",.;- !?",*p;

    cin.getline(s,100);
    p=strtok(s,sep);
    while(p!=NULL)
    {
        cout<<p<<endl;
        p=strtok(NULL,sep);
    }
    return 0;
}
