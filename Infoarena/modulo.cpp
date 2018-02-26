#include <stdio.h>
long long fct(long long a,long A,long b,long c)
{
 if (b<3) return a*a%c;
 else if (b<4) return a*a*a%c;
 else
 {
  a=fct(a,A,b/2,c);
  a=a*a%c;
  if (b%2==1) a=a*A%c;
  return a;
 }
}

int main()
{
 long b,c,A;
 long long a;
 freopen("modulo.in","r",stdin);
 freopen("modulo.out","w",stdout);
 scanf("%ld%ld%ld",&a,&b,&c);
 a=a%c;
 A=a;
 if (b>1) a=fct(a,A,b,c);
 printf("%d",a);
 return 0;
}