#include <iostream>

using namespace std;

int main()
{

    int x, k=0;

    cin>>x;
  while(x>0){
    if(x%2==1){ k++;}
    x=x/10;}
  cout<<k;
    return 0;
}
