#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
const int n=10;
int a[n][n], sum=0,max;
srand(time(NULL));

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        a[i][j]=rand()%10;
        printf("%8d",a[i][j]);
    }
    printf("\n");
}

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (i>j && j<n-1-i){
            max=a[i][j];
            break;
        }
    }
}

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (i>j && j<n-1-i){
            sum+=a[i][j];
            if (a[i][j]>=max) max=a[i][j];
        }
    }
}
printf("Sum of elements = %5d \nMax element = %d",sum,max);
return 0;
}

