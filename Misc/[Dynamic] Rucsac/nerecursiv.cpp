#include <iostream>

using namespace std;

int nrObiecte; /// cate obiecte sunt in total
int greutateMaxima; /// greutatea maxima a rucsacului
int rezultat=0; /// initializam rezultatul cu 0 pentru ca toate valorile sunt pozitive

int greutateObiect[100]; /// vector care retine greutatea fiecarui obiect
int pretObiect[100]; /// vector care retine pretul fiecarui obiect
int solutie[100]; /// vector care retine

int main() {

    cin>>nrObiecte>>greutateMaxima; /// citim numarul obiectelor si greutatea maxima

    for(int i=1; i<=nrObiecte; i++) cin>>greutateObiect[i]>>pretObiect[i]; /// atribuim fiecarui element din vector/obiect greutatea si pretul

    for(int i=1; i<=nrObiecte; i++) { /// folosim for pentru a parcurge vectorul astfel incat sa obtinem greutatile/pretul fiecarui obiect
        for(int j=greutateMaxima; j >= 0; j--) /// folosim for pentru a testa fiecare greutate, descrescator
            if(j >= greutateObiect[i]) /// daca greutatea maxima actuala depaseste greutatea obiectului de pe pozitia i, actualizam solutia
                solutie[j] = max(solutie[j], solutie[j-greutateObiect[i]] + pretObiect[i]); /// actualizam solutia astfel incat sa punem in rucsac cele mai multe obiecte, cu cel mai mare profit
    }

    for(int i=greutateMaxima; i>=0; i--) /// parcurgem vectorul cu solutiile descrescator si alegem valoarea maxima
        if(solutie[i] > rezultat) rezultat = solutie[i]; /// daca gasim o valoare mai buna, actualizam rezultatul

    cout<<rezultat; /// afisam cel mai bun rezultat


    return 0;
}
