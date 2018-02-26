#include<bits/stdc++.h>

using namespace std;

int n, m, a[17][17];
long long maxim = -1000000;
int takec[17];
long long calculez(){
    long long sum = 0;
    for(int i = 0; i < n; ++i) {
        long long s = 0;
        for(int j = 0; j < m; ++j)
            s += (a[i][j] * takec[j]);
        sum += abs(s);
    }
    return sum;
}
void bktrc(int x) {
    if(x == m) {
       if( calculez() > maxim )
            maxim = calculez();
    } else {
        takec[x] = 1;
        bktrc(x + 1);
        takec[x] = -1;
        bktrc(x + 1);
    }
}

int main()
{
    FILE *fin = fopen("flip.in", "r");
    FILE *fout = fopen("flip.out", "w");

    fscanf(fin, "%d %d", &n, &m);

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            fscanf(fin, "%d", &a[i][j]);
    bktrc(0);
    fprintf(fout, "%lld", maxim);

}