#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("distantapuncte.in");
ofstream cout("distantapuncte.out");

int main()
{
    int x1, y1, x2, y2;

    cin>>x1>>y1>>x2>>y2;

    cout<<pow((x2-x1), 2)+pow((y2-y1),2);
    return 0;
}