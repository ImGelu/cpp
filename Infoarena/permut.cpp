#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
ifstream cin("permut.in");
ofstream cout("permut.out");
int n;
vector <int> a, b;
cin >> n;
for(int i = 1 ; i <= n ; ++ i) {
int x;
cin >> x;
a.push_back(x);
}
for(int i = 1 ; i <= n ; ++ i) {
int x;
cin >> x;
b.push_back(x);
}
sort(a.begin(), a.end());
reverse(a.begin(), a.end());
sort(b.begin(), b.end());
reverse(b.begin(), b.end());
long long ans = 0;
for(int i = 0 ; i < n ; ++ i)
ans = ans + 1LL * a[i] * b[i];
cout << ans << '\n';
return 0;
}