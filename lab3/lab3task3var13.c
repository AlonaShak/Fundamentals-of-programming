#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
int b3[10],x;
printf("Enter x:");
scanf("%d",&x);
srand(time(NULL));
for(int i=0;i<10;i++){
b3[i] = rand() % 100-5 ;
printf("%d, ", b3[i]);
}
printf("\n\n ");
for(int i=0;i<10;i++)
    if (b3[i]>x) printf("b3[%d]=%d\n ",i, b3[i]);
 return 0;
}
