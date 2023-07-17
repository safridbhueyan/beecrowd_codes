# beecrowd_codes

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c,d;

 scanf("%d%d%d%d",&a,&b,&c,&d);
if(a==c&&b==d)
{
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24+(c-a),(b-d));
}
else if(a<=c&&b<=d)
{
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c-a),(d-b));
}

else if(a>=c&&b>=d)
{
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((c+23)-a),60+(d-b));
}


else if(a<=c&&b>=d)
{
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((c-1)-a),60+(d-b));
}


else if(a>=c&&b<=d)
{
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((c+24)-a),(d-b));
}




return 0;
}
