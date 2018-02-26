#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    char ss[100];
    int p;

    cin.getline(s, 100);
    cin.getline(ss, 100);
    cin>>p;

    if(s[strlen(s)-p] == ss[strlen(ss)-p] && s[strlen(s)-(p-1)] == ss[strlen(ss)-(p-1)]) cout<<"sunt rime";
    else cout<<"nu sunt rime";
    return 0;
}
