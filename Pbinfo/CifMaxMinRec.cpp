#include <iostream>

using namespace std;

void cifmaxmin(int n, int &maxim, int &minim)
{
	if(n<10) maxim=minim=n;
	else{
		cifmaxmin(n/10, maxim, minim);
		if(n%10>maxim) maxim=n%10;
		if(n%10<minim) minim=n%10;
	}
}

int main()
{
    int n, maxim, minim;

    cin>>n;

    cifmaxmin(n,maxim,minim);

    cout<<maxim<<" "<<minim;

    return 0;
}
