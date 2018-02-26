#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100], b[100];
    int s[100][100];

    cin.getline(a, 100);
    cin.getline(b, 100);

    int n = strlen(a);
    int m = strlen(b);

    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++)
        s[0][j] = j;
        s[i][0] = i;
    }

    for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++)
        if(a[i]==b[j]) s[i][j] = s[i-1][j-1];
            else s[i][j] = min(min(s[i-1][j], s[i-1][j-1]), s[i][j-1]) + 1;
    }

    cout<<s[n][m];
    return 0;
}
