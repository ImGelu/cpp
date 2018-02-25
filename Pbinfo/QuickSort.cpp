#include <iostream>

using namespace std;

void quickSort(int a[], int li, int ls){
      int i=li, j=ls, mij=a[(li+ls)/2];

      while(i<=j){
        while(a[i]<mij) i++;
        while(a[j]>mij) j--;
            if(i<=j){
            swap(a[i], a[j]);
            i++;
            j--;
            }
      }

      if(li<j) quickSort(a, li, j);
      if(i<ls) quickSort(a, i, ls);
}

int main()
{
    int a[100000], n;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    quickSort(a,1,n);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}