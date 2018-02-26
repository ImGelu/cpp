//numere sortate crescator

#include <iostream>

using namespace std;

int fr[1000], nr[1000];

int main()
{
    int x, k=1;

    while(cin>>x && x!=0){
        fr[x]++;
    }

    while(k<=10){
    for(int i=1; i<=fr[k]; i++) cout<<k<<" ";
    k++;
    }

    return 0;
}
