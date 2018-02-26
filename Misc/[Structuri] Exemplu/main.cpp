#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    struct lucrare {int nr; float media;}
    a[100];
    float y; int x,i,n,j;
    ifstream fin("elevi.in");
    ofstream fout("coduri.out");
    i=0;
    while(fin>>x>>y){
    i++;
    a[i].nr=x;
    a[i].media=y;}

    n=i;

    //sortam dupa numar

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i].nr, a[j].nr){
                swap(a[i].media, a[j].media);
        }
    for(i=1; i<=n; i++)
        fout<<a[i].nr<<"    "<<a[i].media<<endl;
    fin.close();
    fout.close();
    return 0;
}
