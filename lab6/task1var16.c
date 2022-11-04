#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct structstudent {
    char author[12];
    char surname[20];
    int birthyear;
    char address[20];
};
struct structstudent input_record(void);
void output_record(struct structstudent tmp[],int n);
void find_record(struct structstudent tmp[],int n);
void delete_record(struct structstudent tmp[],int n);
int main(){
system("cls");
 struct structstudent student[10];
int p;
int i=0;
char x[20];
do {
        if (p==53) break;
    puts("");
    puts("Main menu");
    puts("1 - Create a new record");
    puts("2 - View all records");
    puts("3 - Search students by birth year");
    puts("4 - Delete a record");
    puts("5 - Exit program");
    puts("6 - Clear");
    printf("Choose a command: ");
   p=(int)getchar();
   while ((getchar()) != '\n');

    switch (p)
    {
        case 49:
            student[i]=input_record();
            i++;

            break;
        case 50:
            output_record(student,i);
            break;
        case 51:
            find_record(student,i);
            break;
        case 52:
            delete_record(student,i);
            i--;
            break;

        case 54:
            system("cls");
            break;

    }
}
while (1);
return 0;
}
struct structstudent input_record(void)
{
struct structstudent record;
char tmp[10];
puts("\nEnter group`s name: ");
gets(record.author);
puts("Enter surname: ");
gets(record.surname);
puts("Enter birth year");
record.birthyear=atoi(gets(tmp));
puts("Enter address: ");
gets(record.address);
return record;
}
 void output_record(struct structstudent tmp[],int n){
 printf("\nNumber of records: %d",n);
 printf("\n");
printf("--------------------------------------------------------------------------\n");
printf(" #        Group\t        Surname\t          Birth year\t    Address\n");
printf("--------------------------------------------------------------------------\n");
for (int i=0;i<n;i++){
    printf("%2d.\t%8s\t%8s\t%d\t%8s\n",i,tmp[i].author,tmp[i].surname,tmp[i].birthyear,tmp[i].address);
}
printf("--------------------------------------------------------------------------\n");;

 }

 void find_record(struct structstudent tmp[],int n)
 {
 printf("\nEnter birth year: ");
 int request;
 char tmp1[4];
 int countrecords=0;
 request=atoi(gets(tmp1));
for (int i=0;i<n;i++)
    {
    if (tmp[i].birthyear==request)
    {
        if (countrecords==0)
        {
            printf("--------------------------------------------------------------------------\n");
            printf(" #         Group\t        Surname\t          Birth year\t    Address\n");
            printf("--------------------------------------------------------------------------\n");
             printf("%2d.\t%8s\t%8s\t%d\t%8s\n",i,tmp[i].author,tmp[i].surname,tmp[i].birthyear,tmp[i].address);
            countrecords++;
        }
        else
        {
             printf("%2d.\t%8s\t%8s\t%d\t%8s\n",i,tmp[i].author,tmp[i].surname,tmp[i].birthyear,tmp[i].address);
            countrecords++;
        }
    }
    }
if (countrecords==0)
    printf("No such records");
else
printf("--------------------------------------------------------------------------\n");
 }
void delete_record(struct structstudent tmp[],int n)
{
 printf("\nNumber of record to delete: ");
 int request;
 char tmp1[2];
request=atoi(gets(tmp1));
for (int i=request;i<n-1;i++)
    tmp[i]=tmp[i+1];
}
