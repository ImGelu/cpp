#include <fstream>

using namespace std;
long putere(int n,int d)
{
    int p=1;
    for(int i=1;i<=d;i++)
       p=p*n;
       return p;
}

int main()
{
    ifstream fin("ssnd.in");
    ofstream fout("ssnd.out");
    long long n,i,x,d,p,s,nr;

    fin>>n;
    for(i=1;i<=n;i++)
    {
     nr=1; s=1;
     fin>>x;
     d=2;p=0;
     while(x>1)
     {
       p=0;
      while(x%d==0)
      {
       x=x/d;p++;}

       if(p>0){
        nr=nr*(p+1);
        s=s*((putere(d,p+1)-1)/(d-1))%9973;
        }
        d++;

     }

        fout<<nr<<" "<<s<<"\n";
     }

    return 0;
}
