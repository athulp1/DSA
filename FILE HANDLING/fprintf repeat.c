#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age;
    printf("enter your name and age \n");
    scanf("%s %d",name,&age );

   fp= fopen("fprintf1.txt","w");
    if(fp==NULL)
    {
        printf("failed \n");

    }
    else
    {
        fprintf(fp,"%s %d",name ,age);
        printf("added details to the file succesfully \n");
    }
    fclose(fp);











}
