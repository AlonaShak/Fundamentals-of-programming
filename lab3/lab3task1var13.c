#include <stdio.h>
#include <math.h>

int main(){
double x, sum, prod;
int  k, n,err;
printf("Enter x: ");
err=scanf("%lf",&x);
if (err!=1){printf("Error"); return -1;}
prod=1.0;
for (k=3;k<=5;k++)
{

    sum=0.0;
    for (n=1;n<=7;n++)
    {
        sum+=pow((double)n,2.0)/pow((double)k,(double)n);
    }
    prod*=pow((double)x,(double)k)*sum;
}

printf("Sum=%f\nProduction=%f\n",sum,prod);


return 0;
}
