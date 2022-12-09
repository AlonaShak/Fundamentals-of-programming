#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
char* p1(void);
char* p2(void);
char *p3(void);
int mult(char *f1name);
int spring(void);
int get_binary(void);
char part1[]="C:/Users/Alona/Documents/C_projects/c_files/";
int main()
{
srand(time(0));
system("cls");
char *filename1;
int p;
int i=0;
char x;
do {

    puts("");
    puts("Main menu");
    puts("1 - Create and write the first text file");
    puts("2 - Get the first file");
    puts("3 - Create and write the third text file");
    puts("4 - Exit program");
    puts("5 - Clear");
    puts("6 - Create and write the second text file");
    puts("7 - Get the second file");
      puts("8 - Get the third file");
    printf("Choose a command: ");
    scanf("%d",&p);


    switch (p)
    {
        case 1://1
            filename1=p1();
            puts("");
            puts(filename1);

            break;
        case 2://2
            puts("");
            puts(filename1);
            mult(filename1);
            break;
        case 3://3
            filename1=p3();
            puts("");
            puts(filename1);
            break;
         case 5:
            system("cls");
            break;
        case 6://1
            filename1=p2();
            puts("");
            puts(filename1);
            break;
        case 7://7
             puts("");
            spring();
            break;
        case 8://8
             puts("");
            get_binary();
            break;


    }
}
while (p!=4);

 return 0;
}
char* p1(void)
{
     FILE *f1=NULL;

     char name1[20];
     char part[]="C:/Users/Alona/Documents/C_projects/c_files/";
     char part3[]=".txt";
     int row, col;
     strset(part1,'\0');
     strcpy(part1,part);
     puts("Input file name of matrix text file: ");
     scanf("%s",name1);
     strcat(name1,part3);
     strcat(part1,name1);
     f1=fopen(part1,"w+");
      if (f1==NULL)
    {
       printf("\nError file");
       exit(1);
    }
    puts("Input dimension row");
    scanf("%d",&row);
    puts("Input dimension col");
    scanf("%d",&col);
    fprintf(f1, "%d\n",row);
    fprintf(f1,"%d\n",col);
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<col;j++)
        {
            int tmp=rand()%21-10;
            printf("%7d",tmp);
            fprintf(f1,"%7d",tmp);
        }
printf("\n");
fprintf(f1,"\n");
    }
    fclose(f1);
    printf("File created %s\n",part1);

    return part1;
}

int mult(char *f1name)
{
    FILE *f1=NULL;
    char name1[20];
    char part[]="C:/Users/Alona/Documents/C_projects/c_files/";
    char part3[]=".txt";
    char c;
    int row, col;
    int **a11;
    int count=0;
     strset(part1,'\0');
     strcpy(part1,part);
     puts("Input file name to read: ");
     scanf("%s",name1);
     strcat(name1,part3);
     strcat(part1,name1);
     f1=fopen(part1,"r");
      if (f1==NULL)
    {
       printf("\nError file");
       exit(1);
    }
  fscanf(f1,"%d",&row);
  printf("\nrow=%d",row);
   fscanf(f1,"%d",&col);
  printf("\ncol=%d\n",col);
  a11=(int**)malloc(row*sizeof(int*));
 for (int i=0;i<row;i++)
  {
     a11[i]=(int*)malloc(col*sizeof(int));
  }
 for (int i=0;i<row;i++)
  {
      for (int j=0;j<col;j++)
      {
          fscanf(f1,"%d",&a11[i][j]);
      }
  }
  for (int i=0;i<row;i++)
  {
      for (int j=0;j<col;j++)
      {
         printf("a%d,%d=%3d  ",i,j,a11[i][j]);
      }
      printf("\n");
  }
  fclose(f1);
  return 0;
}

char* p2(void)
{
    FILE *f2=NULL;
    char buffer[128];
    char name1[20];
    char part[]="C:/Users/Alona/Documents/C_projects/c_files/";
    char part3[]=".txt";
     strset(part1,'\0');
     strcpy(part1,part);
     puts("Input file name of text file: ");
     scanf("%s",name1);
     getchar();
     strcat(name1,part3);
     strcat(part1,name1);
     f2=fopen(part1,"w+");
      if (f2==NULL)
    {
       printf("\nError file");
       exit(2);
    }
    puts("Enter a blank line to stop");
    fputs(fgets(buffer,128,stdin),f2);
    //fputs("",f2);
    fclose(f2);
    printf("File created %s\n",part1);
    return part1;
}
int spring(void)
{
     FILE *f1=NULL;
     char buffer[128];
     char *buffer2;
     char s1[]="spring";
     char s2[]="winter";
    char name1[20];
    char part[]="C:/Users/Alona/Documents/C_projects/c_files/";
    char part3[]=".txt";
    strset(part1,'\0');
     strcpy(part1,part);
     puts("Input file name to read: ");
     scanf("%s",name1);
     strcat(name1,part3);
     strcat(part1,name1);
     f1=fopen(part1,"r");
      if (f1==NULL)
    {
       printf("\nError file");
       exit(1);
    }
    puts(fgets(buffer,128,f1));
    buffer2=buffer;
    do
    {
         buffer2=strstr(buffer2,s1);
         if (buffer2==NULL)
         {
             break;
         }
         else
         {
             for (int i=0; i<strlen(s1); i++)
             {
                 *(buffer2+i)=s2[i];
             }
         }
         buffer2++;
    } while(1);

    puts(buffer);


    fclose(f1);
    return 0;
}
char *p3(void)
{
    int *a;
    int n;
    FILE *f1=NULL;
    char name1[20];
    char part[]="C:/Users/Alona/Documents/C_projects/c_files/";
    char part3[]=".txt";
    strset(part1,'\0');
     strcpy(part1,part);
     puts("Input file name of binary file: ");
     scanf("%s",name1);
     strcat(name1,part3);
     strcat(part1,name1);
     f1=fopen(part1,"w+b");
      if (f1==NULL)
    {
       printf("\nError file");
       exit(3);
    }
    puts("Enter dimension of array n: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++)
    {
        *(a+i)=rand()%21-10;
        printf("%d  ",*(a+i));
    }
    fwrite(&n, sizeof(int),1,f1);
    fwrite(a, sizeof(int),n,f1);
    fclose(f1);
    printf("\nFile created %s\n",part1);
    return part1;
}

int get_binary(void)
{
    //const int n=100;
    int *a;
    int n;
      FILE *f1=NULL;
    char name1[20];
    char part[]="C:/Users/Alona/Documents/C_projects/c_files/";
    char part3[]=".txt";
    strset(part1,'\0');
     strcpy(part1,part);
     puts("Input file name of binary file to get: ");
     scanf("%s",name1);
     strcat(name1,part3);
     strcat(part1,name1);
     f1=fopen(part1,"rb");
      if (f1==NULL)
    {
       printf("\nError file");
       exit(3);
    }
    fread(&n,sizeof(int),1,f1);
    a=(int*)malloc(n*sizeof(int));
    fread(a,sizeof(int),n,f1);

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
            }
            fclose(f1);
            free(a);
            return 0;
}
