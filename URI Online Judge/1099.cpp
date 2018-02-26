#include <iostream>
 
using namespace std;
 
int main()
{
    int n, i, m, summ=0, a;
    cin>>a;
for(int z=1; z<=a; z++){
    cin>>n>>m;
if(n<m){
    for(i=n+1; i<m; i++){
        if(i%2!=0){summ=summ+i;}
 
    }}
    else{if(n>m){
        for(i=m+1; i<n; i++){
        if(i%2!=0){summ=summ+i;}
 
    }}}
            cout<<summ<<'\n';
            summ=0;
}
 
    return 0;
}