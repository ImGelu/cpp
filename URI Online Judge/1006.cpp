#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

double a,b,c,MEDIA;
cin>>a>>b>>c;
MEDIA=(2*a + 3*b + 5*c)/10;
cout << fixed << setprecision(1)<<"MEDIA = "<<MEDIA<<endl;
return 0;
}