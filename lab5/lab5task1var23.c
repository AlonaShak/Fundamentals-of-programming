#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fillarray(int *X, int odd,int n);

int main() {
int *X,*Y,*Z;

int n, prap;
srand(time(0));

do {
        printf("Enter number of array elements from 4 to 100:");
        scanf("%d",&n);
        if (n<=100 && n>3) {
            break;
        }
}while(1);

X=(int*) malloc(n*sizeof(int));
Y=(int*) malloc(n*sizeof(int));
Z=(int*) malloc(2*n*sizeof(int));
if (X==NULL || Y==NULL || Z==NULL) {
    printf("Out of memory");
    return -1;
}
fillarray(X,1,n);
fillarray(Y,0,n);
printf("\n");
for (int i=0;i<2*n;i++){
    if (i<n)
    *(Z+i)=*(X+i);
    else *(Z+i)=*(Y+(i-n));
    printf("%d ",*(Z+i));
}
do{
    prap=0;
    int tmp;
    for (int i=0;i<2*n-1;i++){
        if (*(Z+i)<*(Z+i+1)){
            tmp=*(Z+i);
            *(Z+i)=*(Z+i+1);
            *(Z+i+1)=tmp;
            prap=1;
        }
    }

}while(prap);

printf("\n");
for (int i=0;i<2*n;i++){
    printf("%d ",*(Z+i));
}
free(Z);
free(X);
free(Y);



   return 0;
}

void fillarray(int *X,int odd,int n){

printf("\n");
int tmp;
for (int i=0;i<n;i++){
//*(X+i)=rand()%100-15; fill randomized values
     do{
        tmp=rand()%50+10;
        if (odd==0) {
        if (tmp%2==0) {
           *(X+i)=tmp;
           break;
        }}else { if (tmp%2!=0) {
           *(X+i)=tmp;
           break;
        }}
      }
      while(1);
     printf("%d ",*(X+i));
}


}

/*int prap;
do{
    prap=0;
    int tmp;
    for (int i=0;i<n-1;i++){
        if (*(L+i)<*(L+i+1)){
            tmp=*(L+i);
            *(L+i)=*(L+i+1);
            *(L+i+1)=tmp;
            prap=1;
        }
    }

}while(prap);

printf("\n");
for (int i=0;i<n;i++){
    printf("%d ",*(L+i)-*(L+(n-1)));
}
free(L);
return 0;
}*/
