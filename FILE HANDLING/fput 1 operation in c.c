#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char data[50]="U R GOOD";
    int length = strlen(data);
    int counter;


   fp= fopen("FPUT1.txt","w");
    if(fp==NULL)
    {
        printf("file cannot exist \n");

    }
    else
    {
        for(counter=0;counter<length;counter++)
        {
            fputc(data[counter],fp);
            printf("%c",data[counter]);
        }

        fclose(fp);
    }
}
