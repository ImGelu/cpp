#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("sum.in");
    ofstream fout("sum.out");
    
    int a,b;
    fin>>a>>b;
    fout<<a+b;

    return 0;
}
