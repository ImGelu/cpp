#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maxim5.in");
ofstream fout("maxim5.out");

int main()
{
    int nr_numere=0, maxim_linie=-1, x, maxim_global=-1, minim_nr_numere=9999;

    while(fin){
        fin>>x;
        if(x>maxim_linie) maxim_linie=x;
        nr_numere++;
        if(maxim_linie!=0 && x==0){
            //fout<<maxim_linie<<" ---- "<<nr_numere<<"\n\n";
            if(nr_numere<minim_nr_numere){maxim_global=maxim_linie; minim_nr_numere=nr_numere;}
            nr_numere=0;
            maxim_linie=-1;
        }

    }

    fout<<maxim_global;
    return 0;
}