#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d, e, media;

    cin>>a>>b>>c>>d;

    media=(a*2+b*3+c*4+d*1)/10;

    cout<<"Media: "<<fixed<<setprecision(1)<<media<<"\n";

    if(media>=7.0) cout<<"Aluno aprovado.\n";
    else if(media>=5.0 && media<=6.9){
        cout<<"Aluno em exame.\n";
        cin>>e;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<e<<"\n";
        media=(media+e)/2;
        if(media>=5.0) cout<<"Aluno aprovado.\n";
        else cout<<"Aluno reprovado.\n";
        cout<<"Media final: "<<fixed<<setprecision(1)<<media<<"\n";
    }
    else cout<<"Aluno reprovado.\n";
    return 0;
}
