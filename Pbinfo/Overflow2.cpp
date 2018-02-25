#include <iostream>
using namespace std;

const unsigned long long lim = -1;

int n, m;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        unsigned long long nr = 0;
        bool ok = 1;
        for (int a, b, j = 0; j < m; ++j) {
            cin >> a >> b;
            if (!ok)
                continue;
            unsigned long long res = a;
            for (int k = 2; k <= b && ok; ++k) {
                if (!res || !a || res <= lim / a)
                    res *= a;
                else
                    ok = 0;
            }
            if (!b)
                res = 1;
            if (!ok)
                continue;
            if (nr <= lim - res)
                nr += res;
            else
                ok = 0;
        }
        if (ok)
            cout << nr << "\n";
        else
            cout << "Overflow!\n";
    }
}