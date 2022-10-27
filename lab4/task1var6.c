#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
int n=5;
int a[n][n],sum;
for(int i=0;i<n;i++)
{

    for (int j=0;j<n;j++)
    {

        if (i==0 || j==0)
        {
            a[i][j]=1;
        }
        else
        {


            sum=0;
            for (int k=0; k<j;k++)
                sum+=a[i][k];



            for (int k=0; k<i;k++)
                sum+=a[k][j];
            a[i][j]=sum;
        }


}
}


/*for(int i=1;i<n;i++)
{

    for (int j=1;j<n;j++)
    {


            sum=0;
            for (int k=0; k<j;k++)
            {

                    sum+=a[i][k];
            }


            for (int r=0; r<i;r++)
            {

                    sum+=a[r][j];


            }
            a[i][j]=sum;

        }

    }
*/


for(int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
        printf("%3d ",a[i][j]);

    }
    puts("");

}
return 0;
}

