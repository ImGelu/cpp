#include <iostream>
using namespace std;
int main()
{
int X, i;
cin >> X;
if(X%2 == 0)
{
for(i=X; i <= X+12; i++)
if(i%2 != 0)
cout << i << endl;
}
else
for(i=X; i <= X+11; i++)
if(i%2 != 0)
cout << i << endl;
system("pause");
return 0;
}