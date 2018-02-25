#include <iostream>
using namespace std;

const int NMax = 1000000;
int N,Candidat,Nr,NrSol;
int A[NMax + 5];

int main()
{
    cin >> N;
    for(int i = 1; i <= N; ++i)
      cin >> A[i];

    Candidat = -1;

    for(int i = 1; i <= N; ++i)
      if(Nr == 0)
        {
        Candidat = A[i];
        Nr = 1;
        }
      else
        if(Candidat == A[i])
          Nr++;
        else
          Nr--;

    for(int i = 1; i <= N; ++i)
      if(A[i] == Candidat)
        NrSol++;

    if(NrSol >= N/2 + 1)
       cout <<"DA "<< Candidat;
    else
      cout << "NU";

    return 0;
}