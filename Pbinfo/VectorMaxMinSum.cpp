#include <iostream>

using namespace std;

void P(int a[100], int n, int &mini, int &maxi, int &sum){
    mini = 999999, maxi=-1, sum=0;

    for(int i=0; i<n; i++){
        sum+=a[i];
        if(a[i]<mini) mini=a[i];
        if(a[i]>maxi) maxi=a[i];
    }
}

int main()
{
    int a[100], n, mini, maxi, sum;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    P(a,n,mini,maxi,sum);

    cout<<mini<<" "<<maxi<<" "<<sum;

    return 0;
}
