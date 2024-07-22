#include<stdio.h>
int main()
{
    int status;
    status=remove("delete() func/example.txt");
    printf("%d\n",status);

    if(status==0)
    {
        printf("FILE DEL SUCCESFULY\n");
    }
    else{
        printf("error to del to file \n");
    }






}
