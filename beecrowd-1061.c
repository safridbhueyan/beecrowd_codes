#include<string.h>
int main(){
   int a,b;
   int h1,m1,s1,h2,m2,s2;
   int D,H,M,S;

   scanf("Dia %d",&a);
   scanf("%d :%d :%d\n",&h1,&m1,&s1);
   scanf("Dia %d",&b);
   scanf("%d :%d :%d",&h2,&m2,&s2);
   D=b-a;
   H=h2-h1;
   M=(m2-m1);
   S=(s2-s1);
   if(S<0){ S=S+60; M--;}
   if(M<0){ M=M+60; H--; }
   if(H<0){ H+=24; D--; }
   printf("%d dia(s)\n",D);
   printf("%d hora(s)\n",H);
   printf("%d minuto(s)\n",M);
   printf("%d segundo(s)\n",S);

return 0;
}
