#include <iostream>

using namespace std;

int main()
{
	int n, v, p, cpv=9+2*90+3*201; //=792
	bool ok=true;

	cin>>n;

	if(n%cpv==0) v=n/cpv, p=300;
	else{
		v=n/cpv+1;
		n%=cpv;
		p=0;
		if(n<10) p+=n, n=0;
		else n-=9, p+=9;

		if(n<=2*90){
			if(n%2==0) p+=n/2, n=0;
			else ok=false;
		}
		else p+=90, n-=2*90;

		if(n%3!=0) ok=false;
		else p+=n/3;
	}

	if(ok) cout<<v<<" "<<p;
	else cout<<"IMPOSIBIL";

	return 0;
}