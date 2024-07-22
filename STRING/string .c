#include<stdio.h>
int main()
{
    char s[10];
    printf("enter the character\n");
    scanf("%s",s);
   // printf("%s",s);
int i;
for(i=0;s[i]='\0';i++)
{
    printf("%s",i);
     printf("%s",s[i]);
}
}
