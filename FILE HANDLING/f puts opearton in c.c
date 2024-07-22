#include<stdio.h>
int main()
{

    FILE *fp;
    char data[50];

    fp=fopen("FPUTS.txt","w");
    if(fputs==NULL)
    {
        printf("file is not created \n");

    }
    else{
        printf("enter the string to files \n");
        gets(data);
        fputs(data,fp);
        printf("eeterd on files succesfully");
    }


    fclose(fp);

}







