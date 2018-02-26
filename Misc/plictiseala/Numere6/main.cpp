#include <fstream>

using namespace std;

ifstream cin("numere6.in");
ofstream cout("numere6.out");

int main()
{
    int a, b, fr[10]={0};

    cin>>a>>b;

    while(a){
        fr[a%10]++;
        a/=10;
    }
    while(b){
        fr[b%10]++;
        b/=10;
    }

    for(int i=9; i>=0; i--)
        for(int j=1; j<=fr[i]; j++)
            cout<<i;

    return 0;
}
