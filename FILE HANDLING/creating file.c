#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("paltu.txt","a");
    if(fp==NULL)
    {
        printf("file cannot exist\n");

    }
    else
    {
        printf("file open susscefully check location\n");

    }
    fclose(fp);




}
