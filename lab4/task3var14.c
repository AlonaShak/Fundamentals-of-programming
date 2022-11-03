#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void createrandomarray(int n,int arr[]);
void printarray(int n, int arr[], char name[]);
void arraymin(int n,int arr[], char name[]);
void sortarray(int n,int arr[], char name[]);
int main(){
const int n1=10,n2=11,n3=12;
int b1[n1],b2[n2],b3[n3];
char b1name[]="b1",b2name[]="b2",b3name[]="b3";
srand(time(NULL));
createrandomarray(n1,b1);
printarray(n1,b1,b1name);
arraymin(n1,b1,b1name);
sortarray(n1,b1,b1name);
//////
createrandomarray(n2,b2);
printarray(n2,b2,b2name);
arraymin(n2,b2,b2name);
sortarray(n2,b2,b2name);
//////
createrandomarray(n3,b3);
printarray(n3,b3,b3name);
arraymin(n3,b3,b3name);
sortarray(n3,b3,b3name);
return 0;
}

void createrandomarray(int n,int arr[])
{
    for(int i=0;i<n;i++) arr[i]=rand()%25-10;
}

void printarray(int n, int arr[], char name[])
{
    printf("Array %s : ",name);
    for(int i=0;i<n;i++)
        printf("%2d[%2d] ",arr[i],i);
    puts("");
}

void arraymin(int n,int arr[],char name[])
{
    int min=0,ind=-1;
    for(int i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            min=arr[i];
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]%2==0 && arr[i]<=min)
        {
            min=arr[i];
            ind=i;
        }
    }

    (ind>=0)?printf("min = %d[%d]\n",min,ind):printf("No even numbers in array %s\n",name);
}

// sorting bubble method
void sortarray(int n,int arr[], char name[])
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printarray(n,arr,name);
    puts("");

}
