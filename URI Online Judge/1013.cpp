#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int y,a,b,x,c;
    scanf("%d%d%d",&a,&b,&c);
    x=(a+b+abs(a-b))/2;
    y=(x+c+abs(x-c))/2;
    printf("%d eh o maior\n",y);
    return 0;
}
