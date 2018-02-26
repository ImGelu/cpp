#include <fstream>
#include <iostream>

using namespace std;

ifstream fin ("adunare.in");
ofstream fout ("adunare.out");

int a,b;

int main()
{
    fin>>a>>b;
    fout<<a+b;
    return 0;
}