#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[100];
    cin.getline(s,100);
    for(int i=0;s[i];++i)
      {
       for(int j=0;j<=i;j++)   cout<<s[j];
       cout<<endl;

}
    for(int i=0;s[i];++i){
        while(isalpha(s[i])){
        strcpy(s+i,s+i+1);
        cout<<s<<endl;}

}return 0;
}
