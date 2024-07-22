//fgets(variable_TO_store,length,file_pointer)



#include<stdio.h>
int main()
{
    FILE *fp;
    char data[15];
    fp=fopen("paltu.txt","r");
    if(fp==NULL)
    {
        printf("file cannot open or exist\n");
    }
    else{
        while(!feof(fp))
        {
            fgets(data,15,fp);
            printf(" the character%s",data);

        }
        fclose(fp);


    }







}
