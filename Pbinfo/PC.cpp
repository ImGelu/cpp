/*m este norocos <=> m^2 = a + (a+1) + (a+2) + … + (a+m-1)
                 <=> m^2 = m*a + m*(m-1)/2 | *2
                 <=> 2*m^2 = 2*m*a + (m-1)*m | :m
                 <=> 2*m = 2*a + m-1
                 <=> m = 2*a-1 => m număr impar, a=(m+1)/2
*/

#include <fstream>

using namespace std;

ifstream cin("pc.in");
ofstream cout("pc.out");

int main(){
    int t, x;

    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>x;
        if(x%2) cout<<1<<' ';
        else cout<<0<<' ';
    }
    return 0;
}