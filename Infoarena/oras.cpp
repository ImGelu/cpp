#include <fstream>
using namespace std;
ifstream is("oras.in");
ofstream os("oras.out");
int N;
bool G[251][251];
int main()
{
is >> N;
if ( N == 2 || N == 1 || N == 4)
{
os << "-1";
return 0;
}
G[1][2] = 1;
G[2][3] = 1;
G[3][1] = 1;
if ( N % 2 == 0 )
{
G[4][5] = 1;
G[5][6] = 1;
G[6][4] = 1;
G[1][4] = 1;
G[2][6] = 1;
G[3][5] = 1;
G[4][2] = 1;
G[5][1] = 1;
G[6][3] = 1;
G[4][3] = 1;
G[5][2] = 1;
G[6][1] = 1;
}
int i;
if ( N % 2 == 0 ) i = 8;
if ( N % 2 == 1 ) i = 5;
for (; i <= N; i += 2 )
{
G[i-1][i] = 1;
for ( int j = 1; j <= i-2; ++j )
G[j][i-1] = G[i][j] = 1;
}
for ( int i = 1; i <= N; ++i )
{
for ( int j = 1; j <= N; ++j )
os << G[i][j];
os << '\n';
}
is.close();
os.close();
}
