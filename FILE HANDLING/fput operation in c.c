#include<stdio.h>
int main()
{
    FILE *fp;
    char data[50]= "athul pujari";
    int Length = strlen(data);
    int counter;

    fp=fopen("FPUT.txt","w");
    if(fp==NULL)
    {
        printf("FILE CANNOT EXIST \n");

    }
    else
    {
        for(counter=0;counter<Length;counter++)
        {
            fputc(data[counter],fp);
printf("%c",data[counter]);

        }

    }
    fclose(fp);







}












