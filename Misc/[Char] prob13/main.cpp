#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100],sep[]=" ",*p;
    int k, cnt=0;

    cin.getline(s,100);
    cin>>k;

    p=strtok(s,sep);
    while(p!=NULL)
    {
        if(strlen(p)==k) cnt++;
        p=strtok(NULL,sep);
    }

    cout<<cnt;
    return 0;
}
