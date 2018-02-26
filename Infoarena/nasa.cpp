#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("nasa.in");
ofstream cout("nasa.out");
bool nasa[2147000000];

int main(){

int a, b;
int cnt =0;
cin>>a>>b;
for(int i=a; i<=b; ++i) nasa[i]=true;

for(int i=2; i*i<=b; ++i){
int k=(a/(i*i))*(i*i);

for(int j=k; j<=b; j+=(i*i))
nasa[j]=false;
}

for(int i=a; i<=b; ++i)if(nasa[i])++cnt;
cout<<cnt;
