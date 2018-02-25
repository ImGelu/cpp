#include <iostream>

using namespace std;

int P(int a[], int n, int &mini, int &maxi, int &sum){
    if(n==1) mini = maxi = sum = a[0];
    else{
        P(a, n-1, mini, maxi, sum);
        sum+=a[n-1];
        if(a[n-1]<mini) mini=a[n-1];
        if(a[n-1]>maxi) maxi=a[n-1];
    }
}

int main()
{
    int a[105], n, mini, maxi, sum;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    P(a,n,mini,maxi,sum);

    cout<<mini<<" "<<maxi<<" "<<sum;

    return 0;
}
