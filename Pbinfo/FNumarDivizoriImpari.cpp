#include <iostream>

using namespace std;

void nr_div_imp(int n, int &k)
{
   k=0;
   int i;
   for(i=1; i*i<n; i++)
        if(n%i==0)
        {
            if(i%2!=0) k++;
            if(n/i%2!=0) k++;
        }
    if(n%i==0 && i%2==1) k++;
}

int main(){

    return 0;
}