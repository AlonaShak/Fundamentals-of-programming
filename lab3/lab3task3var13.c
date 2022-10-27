#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
    int n=20;
int b3[n],x,min,index;
printf("Enter x:");
scanf("%d",&x);
srand(time(NULL));
for(int i=0;i<n;i++){
b3[i] = rand()% 100-10  ;
printf("%d, ", b3[i]);
}
printf("\n\n ");
min=b3[0];
for(int i=0;i<n;i++)
{
    if (b3[i]<min)
    {
        min=b3[i];
        index=i;

    }
}
printf("min=%d; index=%d",min,index)    ;


 return 0;
}
