#include <stdio.h>
#include <math.h>
float computeA(float x);

int main(){

const float x=2.4;
float A=computeA(x),B=computeA(50.0);

printf("A=%f",A);
printf("\nB=%f",B);

return 0;
}

float computeA(float x){
float sum=0.0;
float prod=1.0;

for(int i=1;i<=8;i++){
    sum+=pow(x,i)/i;
}
for(int k=2;k<=4;k++){
    prod*=pow(-1.0,3.0*k)*pow(x,2.0*k-2.0)/(2.0*k-2.0);
}
return pow(x,cos(x))*sum-prod/asin(0.65);

}
