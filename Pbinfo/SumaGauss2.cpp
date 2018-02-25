#include <fstream>
using namespace std;

ifstream fin("sumagauss2.in");
ofstream fout("sumagauss2.out");

/*
Suma Anei: n(n + 1)/2
Suma Andreei: m(m + 1)/2

Diferenta: S = n(n + 1)/2 - m(m + 1)/2
           S = ( n(n + 1) - m(m + 1) ) / 2
           2S = n(n + 1) - m(m + 1)
           2S = n^2 - m^2 + n - m
           2S = (n - m)(n + m) + (n - m)

Final:     2S = (n - m)(n + m + 1)
L-am scris pe 2S ca produs de doi termeni. Acestia trebuie sa fie diviorii lui 2S, asa ca luam fiecare divizor al lui 2S si-l verificam in ecuatie.

Presupunem ca in cautarea noastra am gasit un divizor d, astfel incat 2S % d == 0. Dar daca d este divizor, atunci si (2S / d) este divizor
Astfel 2S poate fi scris ca: 2S = d * (2S / d)
Fiecare din termenii din ecuatia de maia sus trebuie sa coespunda lui (n - m), respectiv (n + m + 1)
Vom stabili ca n - m = d si n + m + 1 = (2s / d), deoarece n - m < n + m + 1
Aici avem un sistem de ecuatii. Daca adunam cele doua relatii, obtinem: 2n + 1 = d + 2S / d

Deci: 2n = d + 2S / d - 1
Ca n sa fie natural, termenul din dreapta (d+2S/d-1) trebuie sa fie divizibil cu 2. Facem verificarea, iar apoi il aflam pe n.
Pe m il putem afla din n - m = d ==> m = n - d;
*/

int main()
{
    long long S, sq, aux, n, m, d, S2;
    fin>>S;
    S2 = S * 2;
    for(d = 1; d * d <= S2; d++)
    {
        if(S2 % d == 0)            //verificam daca este divizor
        {
            aux = d + S2 / d - 1;
            if(aux % 2 == 0)       //Din ecuatia 2n = d + 2S / d - 1, verificam daca este divizibil cu 2
            {
                n = aux / 2;
                m = n - d;
                fout<<n<<' '<<m<<'\n';
            }
        }
    }
    return 0;
}
