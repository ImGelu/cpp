#include<fstream>

using namespace std;
ifstream cin("multimi2.in");
ofstream cout("multimi2.out");

int i,n;
int main()
{

    cin>>n;
    if(n%4==0)
    {
    cout<<0<<'\n';
        int dif=n/4;
        cout<<dif*2<<'\n';

        for(i=1;i<=dif;i++)cout<<i<<" "<<n-i+1<<" ";
            cout<<'\n';

        cout<<dif*2<<"\n";

        for(i=dif+1;i<=n/2;i++)

            cout<<i<<"\n"<<n-i+1<<"\n";
    }


    else if(n%4==1)
    {
        int dif=n/4;

        cout<<1<<"\n";

        cout<<2*dif+1<<"\n";
        cout<<1<<" ";

        for(i=2;i<2+dif;i++)

            cout<<i<<" "<<n-i+2<<" ";
            cout<<"\n";

            cout<<2*dif<<"\n";

        for(i=2+dif;i<=(n+1)/2;i++)

            cout<<i<<"\n"<<n-i+2<<"\n";
    }
    else
        if(n%4==2)
    {
        int dif=n/4;

        cout<<1<<"\n";

        cout<<2*dif+1<<"\n";
        cout<<1<<" ";

        for(i=3;i<3+dif;i++)

            cout<<i<<" "<<n-i+3<<" ";
            cout<<"\n";


            cout<<2*dif+1<<"\n";

            cout<<2<<"\n";
            for(i=3+dif;i<=(n+2)/2;i++)

                cout<<i<<"\n"<<n-i+3<<"\n";
                cout<<"\n";

    }
    else
        if(n%4==3)
    {
    cout<<0<<"\n";
        int dif=n/4;

        cout<<2*dif+2<<"\n";

        cout<<1<<" "<<2<<" ";
        for(i=4;i<4+dif;i++)

            cout<<i<<" "<<n-i+4<<" ";
            cout<<"\n";

        cout<<2*dif+1<<"\n";

        cout<<3<<"\n";
        for(i=4+dif;i<=(n+3)/2;i++)

           cout<<i<<"\n"<<n-i+4<<"\n";

    }


}