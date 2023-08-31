#include<stdio.h>
int main(){

float a,s,m,x,y,p,z;

scanf("%f",&a);


if(a<=2000){

    printf("Isento\n");
}
else if (a>=2000.01 && a<=3000.00){
    s=(a-2000);
    m= (s*0.08);
    printf("R$ %0.2f\n",m);

}
else if (a>=3000.01 && a<=4500.00){
    s=(a-3000);
    m= (s*0.18);
    x=((a-2000)-s);
    y=(x*0.08);
    printf("R$ %0.2f\n",(m+y));

}
else if (a>= 4500.01){
    s=(a-4500);
    m= (s*0.28);
    x=((a-3000)-s);
    y=(x*0.18);
    p=((a-2000)-x-s);
    z=(p*0.08);
    printf("R$ %0.2f\n",(m+y+z));

}
return 0;
}
