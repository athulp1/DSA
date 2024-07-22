#include<stdio.h>
int main()
{

FILE *fp;
char name[50];
int age;
printf("enter the naem and age \n");
scanf(" %s %d",name ,&age);
fp=fopen("FPRINTF.txt","w");
if(fp==NULL)
{
    printf("file not exit \n");

}
    else
    {
        fprintf(fp,"%s\n %d\n",name,age);
        printf("added to file succesfully \n");

    }

       fclose(fp);






}
