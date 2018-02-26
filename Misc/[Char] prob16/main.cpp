#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], c1, c2, sep[]=" ",*p;

    cin.getline(s, 100);
    cin>>c1>>c2;

    p=strtok(s, sep);
    while(p!=NULL){
        //if(p==c1) p=c2;
        cout<<p<<" ";
        p=strtok(NULL, sep);
    }
    return 0;
}
