#include <iostream>

using namespace std;

void ordonare(int a[], int n, int st, int dr){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=st; i<dr-j+1; i++)
            if(a[i]>a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}

int main()
{
    int a[100], n, st, dr;

    cin>>n>>st>>dr;

    for(int i=0; i<n; i++) cin>>a[i];

    ordonare(a, n, st, dr);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}
