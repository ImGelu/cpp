#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

int r;
double pi=3.14159;

cin>>r;
cout<<"VOLUME = "<<fixed<<setprecision(3)<<(4.0/3) * pi * r*r*r<<"\n";

    return 0;
}
