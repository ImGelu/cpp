#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    string nr[100];
    int k=0;

    cin.getline(s, 100);
    while(strlen(s)!=0){
        cin.getline(s, 100);
        if(strlen(s)<80) k++, nr[k] = s;
    }

    for(int i=1; i<=k; i++)
        cout<<nr[k], cout<<endl;
    return 0;
}
