#include <bits/stdc++.h>

using namespace std;

ifstream fin("vila.in");
ofstream fout("vila.out");

const int oo = (1<<31)-1;

int N, M, act, nr;
int D[130][130], E[130][130];

const int dx[] = {0, -1, 1,  0};
const int dy[] = {1,  0, 0, -1};

inline void Fill(int i, int j, int l, int k) {
    D[i][j] = k;
    ++ act;
    for(int d = 0 ; d < 4 ; ++ d) {
        int inou = i + dx[d];
        int jnou = j + dy[d];
        if(D[inou][jnou] == l)
            Fill(inou, jnou, l, k);
    }
}

inline void Fill2(int i, int j, int l, int k) {
    E[i][j] = k;
    for(int d = 0 ; d < 4 ; ++ d) {
        int inou = i + dx[d];
        int jnou = j + dy[d];
        if(E[inou][jnou] == l)
            Fill2(inou, jnou, l, k);
    }
}

int main() {
    fin >> N >> M;
    for(int i = 1 ; i <= N ; ++ i)
        for(int j = 1 ; j <= M ; ++ j) {
            char c;
            fin >> c;
            if(c == '-')
                D[i][j] = -1, E[i][j] = -1; //punem -1 daca face parte din camera
            else D[i][j] = -2;
        }
    int Ans1 = 0, Ans2 = 0, Ansi = 0, Ansj = 0, Ans3 = 0;
    for(int i = 1; i <= N ; ++ i)
        for(int j = 1 ; j <= M ; ++ j)
            if(D[i][j] == -1) {
                act = 0;
                Fill(i, j, -1, ++ nr); // primul fill pentru numarul de camere
                Ans2 = max(act, Ans2); //daca camera asta are cel mai mare loc
                Fill2(i, j, -1, act); //pentru a face modifica in matricea E locurile libere cu numarul de locuri libere de acolo
            }
    Ans1 = nr; //nr = numarul de camere
    for(int i = 1 ; i <= N ; ++ i)
        for(int j = 1 ; j <= M ; ++ j)
            if(D[i][j] == -2) { //perete
                set<int> s;
                int ct = 1;
                //face un alt fill
                for(int d = 0 ; d < 4 ; ++ d) {
                    int inou = i + dx[d];
                    int jnou = j + dy[d];
                    if(s.find(D[inou][jnou]) == s.end()) {
                        ct += E[inou][jnou]; // crestem ct cu numarul suprafetei camerei
                        s.insert(D[inou][jnou]); //il bagam in ste
                    }
                    if(ct > Ans3) //daca camrea noua e mai mare
                        Ans3 = ct, Ansi = i, Ansj = j; // schimbam dimensinea camerei si de unde incepe i si j
                }
            }
    fout << Ans1 << '\n' << Ans2 << '\n' << Ansi << ' ' << Ansj << ' ' << Ans3 << '\n';
    return 0;
}
