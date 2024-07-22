#include<stdio.h>
int main()
{

  FILE *fp;
  char data[50];
  fp=fopen("paltu.txt","r");
  if(fp==NULL)
  {
      printf("file cannot exists\n");
  }
    else{
        fscanf(fp,"%s",data);
        fclose(fp);
    }

getch();
printf("%s",data);




}
