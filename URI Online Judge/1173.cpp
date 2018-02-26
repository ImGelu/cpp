#include<stdio.h>

int main(){

    double n[50];
    int i;
    scanf("%lf",&n[0]);
    for (i=0;i<10;i++){
        printf("N[%i] = %.0lf\n",i,n[i]);
        n[i+1]=n[i]*2;
            }
    return 0;
}