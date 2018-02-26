#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
double R, A;
double p=3.14159;

cin>>R;
A=R*R * p;
cout << fixed << setprecision(4)<< "A="<<A<<endl;
return 0;
}
