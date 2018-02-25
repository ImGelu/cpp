#include <fstream>

using namespace std;

ifstream fin("maxim3.in");
ofstream fout("maxim3.out");

int main()
{
    double a, b, c;
    fin>>a>>b>>c;
    fout<<max(a, max(b,c));

}
