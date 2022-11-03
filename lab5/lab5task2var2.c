#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
char name[100];
char name2[100];
char backs=' ';
int count=0;
gets(name);
strset(name2,'\0');

for (int i=(strlen(name)-1);i>=0;i--){

    if (name[i]!=32){
       count++;
        if ((name[i-1]==32)&&(i>0)||(i==0)&&(name[i]!=32))
            {
                strncat(name2,&name[i],count);
                strncat(name2,&backs,1);
                count=0;
            }
    }
}
puts(name2);
return 0;
}
