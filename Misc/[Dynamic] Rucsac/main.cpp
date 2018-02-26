#include <iostream>

using namespace std;

    int s[100], k=0;

    int rucsac(int n, int g, int gO[], int pO[]){

    if(n == 0 || g == 0) return 0; /// daca greutatea maxima sau nu sunt obiecte, se obtine un profit 0
    if(gO[n] > g) return rucsac (n-1, g, gO, pO); /// daca greutatea obiectului este mai mare decat greutatea maxima, trecem la urmatorul obiect
    else{ k++; s[k] = gO[n]; return max(rucsac(n-1, g, gO, pO), pO[n] + rucsac(n-1, g - gO[n], gO, pO)); }
/// se alege maximul dintre suma greutatii obiectului de pe pozitia n si suma dintre pretul si greutatea ramasa a rucsacului dupa ce s-a ales obiectul
    }

int main()
{
    int n, g, gO[100], pO[100];

    cin>>n>>g;

    for(int i=1; i<=n; i++) cin>>gO[i]>>pO[i];

    cout<<rucsac(n, g, gO, pO)<<"\n";

    for(int i=1; i<=n; i++) cout<<s[i]<<" ";

    return 0;
}
