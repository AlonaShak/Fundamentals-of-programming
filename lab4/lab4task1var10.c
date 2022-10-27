#include <stdio.h>

int main(){
const int n=5;
int a[n][n];
int k;

printf("Enter value of k:");
scanf("%d",&k);
printf("\n");

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (i==j){
            a[i][j]=n-i;
        }
        else if (i>j){
            a[i][j]=0;
        }
        else {
            a[i][j]=k;
            k++;
        }
    }
}
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        printf("%2d ",a[i][j]);
    }
    printf("\n");
}
return 0;
}