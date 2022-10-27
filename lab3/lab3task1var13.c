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
        sum=sum + pow(n,2.0)/pow(k,n);
    }
    prod=prod*pow(x,k)*sum;
}

printf("Production=%f\n",prod);


return 0;
}
