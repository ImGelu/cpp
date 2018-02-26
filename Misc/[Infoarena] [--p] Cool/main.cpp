#‎include‬ <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int NMAX = 1003;
const int VMAX = 5001;
int cnt[NMAX], a[5001], nr[VMAX];
int T, K, n, maxK, minK = VMAX;
int L, Lmax = 1, nMaxCool, amin, amax, bad;
int main()
{
    cin >> T >> n >> K;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if ( i < K )
        {
            maxK = max(maxK, a[i]);
            minK = min(minK, a[i]);
            nr[a[i]]++;
        }
    }
    if ( T == 1 )
    {
        bool cool = true;
        int distincte = 0;
        for ( int x = minK; x <= maxK; ++x )
        {
            if ( nr[x] == 0 || nr[x] > 1 )
                cool = false;
            if ( nr[x] == 1 ) distincte++;
        }
        if ( cool )
            cout << maxK << '\n';
        else
            cout << distincte << '\n';
    }
    else
    {
        for ( int i = 0; i < n; ++i )
        {
            cnt[a[i]]++, bad = 0;
            amin = amax = a[i];
            for ( int j = i + 1; j < n; ++j )
            {
                cnt[a[j]]++, L = j - i + 1;
                if ( cnt[a[j]] > 1 ) bad++;
                if ( amax < a[j] ) amax = a[j];
                if ( amin > a[j] ) amin = a[j];
                if ( bad || amax - amin != j - i )
                    continue;
                if ( L > Lmax )
                    Lmax = L, nMaxCool = 1;
                else if ( L == Lmax ) nMaxCool++;
            }
            cnt[a[i]]--;
            memset(cnt, 0, sizeof(cnt));
        }
        cout << Lmax << '\n' << nMaxCool << '\n';
    }
    return 0;
}
