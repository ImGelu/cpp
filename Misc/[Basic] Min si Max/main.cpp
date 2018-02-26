//#include <iostream>
#include <limits.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int max=INT_MIN, min=INT_MAX, n=0;

    max=n;

    while(cin>>n){
        if(n>max) max=n;
        if(n<min) min=n;}

        cout<<min<<'\n'<<max<<'\n';


    return 0;
}
