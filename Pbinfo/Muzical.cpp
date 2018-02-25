//#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("muzical.in");
ofstream cout("muzical.out");

string str[8]={"do1", "re1", "mi", "fa", "sol", "la", "si", "do2"};

int f(string c){
    if(c=="do1") return 0;
    if(c=="re") return 1;
    if(c=="mi") return 2;
    if(c=="fa") return 3;
    if(c=="sol") return 4;
    if(c=="la") return 5;
    if(c=="si") return 6;
    if(c=="do2") return 7;
}

int main()
{
    int n, s=0;
    string c;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>c;
        s+=f(c);
    }

    cout<<str[s%8];
    return 0;
}
