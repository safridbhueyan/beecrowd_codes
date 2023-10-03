#include<stdio.h>
#include<string.h>
int main(){
double x[12][12],sum=0.0;
int i,j,k;
char c;

scanf("%d %c",&k,&c);
for(i=0;i<12;i++){
    for(j=0;j<12;j++){
        scanf("%lf",&x[i][j]);
    }
}
for(i=0;i<12;i++){
    sum+=x[i][k];
}
if(c=='S'){printf("%.1lf\n",sum);}
else if (c=='M'){printf("%.1lf\n",sum/12);}
return 0;
}
