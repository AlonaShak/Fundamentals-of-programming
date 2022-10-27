#include <stdio.h>

int main(){
const int n=30;
int a[n][n];


for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (i==j)
            a[i][j]=0;

        else if (j ==(n-i-1))
            a[i][j]=0;

        else if ((j>i) && (j <(n-i-1)))
            a[i][j]=1;
        else if ((j<i) && (j <(n-i-1)))
        a[i][j]=2;
        else if ((j<i)&&(j >(n-i-1)))
            a[i][j]=3;
        else a[i][j]=4;


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
