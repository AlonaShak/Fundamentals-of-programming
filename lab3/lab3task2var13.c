#include <stdio.h>
#include <math.h>

int main(){
float b3[10], sum;
int  n=10,k=0;
for (int i=0; i<n;i++)
{
    printf("Enter b3[%d]: ",i);
    scanf("%f",&b3[i]);
}
sum=0;
for (int i=0; i<n;i++)
{
    if (b3[i]<0)
    {
        sum+=i;
        k++;
    }
    printf("b3[%d]:%f \n",i,b3[i]);

}

printf("sum of negative indexes:%f \n",sum/k);



return 0;
}
