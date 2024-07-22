#include<stdio.h>
int main()
{
    FILE *fp;
    char data[50];

    fp=fopen("FPUTS1.txt","w");
    if(fp==NULL)
    {
        printf("files is not created \n");
    }
    else{
        printf("enter the string upload to files \n");
        gets(data);
        fputs(data,fp);
        printf("data added to files succesfully \n");



    }
    fclose(fp);










}
