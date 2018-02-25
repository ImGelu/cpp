#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, km, ore, total_ore=0, total_km=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>ore>>km;
        total_ore+=ore;
        total_km=total_km+(km*ore);
    }
    cout<<total_km<<" "<<fixed<<setprecision(2)<<(double)total_km/total_ore;
    return 0;
}