1079
#include<stdio.h>
#include<string.h>
int main(){
 int N,i;
 float x,y,z,avg,sum;
 scanf("%d",&N);
 for(i=1;i<=N;i++){
   scanf("%f %f %f",&x,&y,&z);
   sum=(x*2+y*3+z*5);
  avg=(sum/(2+3+5));

printf("%.1f\n",avg);

}
return 0;
}
