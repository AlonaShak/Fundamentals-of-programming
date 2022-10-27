#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
const int n=6;
int a[n][n], sum=0;
srand(time(NULL));

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        a[i][j]=rand()%10;
        if (i>j && j<n-1-i){
        sum+=a[i][j];
        }
        printf("%3d",a[i][j]);
    }
    printf("\n");
}
printf("Sum of elements =%d ",sum);
return 0;
}

