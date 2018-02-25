#include <iostream>

using namespace std;

bool bisect(int n){
    if(n%4==0 && n%100!=0 || n%400==0) return true;
    return false;
}

int main()
{
    int z, l, a;

    cin>>z>>l>>a;

        if(l==1 && z<31 || l==2 && z<28 && !bisect(a) || l==3 && z<31 || l==4 && z<30 || l==5 && z<31 || l==6 && z<30 || l==7 && z<31 || l==8 && z<31 || l==9 && z<30 || l==10 && z<31 || l==11 && z<30 || l==12 && z<31 || l==2 && z<29 && bisect(a)) z++;
        else if(l==1 && z==31 || l==2 && z==28 && !bisect(a) || l==3 && z==31 || l==4 && z==30 || l==5 && z==31 || l==6 && z==30 || l==7 && z==31 || l==8 && z==31 || l==9 && z==30 || l==10 && z==31 || l==11 && z==30 || l==2 && z==29 && bisect(a)){l++; z=1;}
        else if(l==12 && z==31){a++; l=1; z=1;}
    cout<<z<<" "<<l<<" "<<a;


    return 0;
}
