#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,i_m;
int p=0;
scanf("%lf",&a);

if(0<= a && a<=400.00)
{
    i_m=(a*0.15);
    p+=15;
}
else if(a<=800.00)
{
    i_m=(a*0.12);
    p+=12;

}
else if(a<=1200.00)
{
    i_m=(a*0.10);
    p+=10;
}
else if(a<=2000.00)
{
    i_m=(a*0.07);
    p+=7;
}
else 
{
    i_m=(a*0.04);
    p+=4;
}
printf("Novo salario: %.2f\n",(a+i_m));
printf("Reajuste ganho: %.2f\n",i_m);
printf("Em percentual: %d %%\n",p);

return 0;
}
