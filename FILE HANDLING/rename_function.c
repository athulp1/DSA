#include<stdio.h>
int main()
{
    if(rename("rename_old.txt","rename_new.txt")==0)
    {
        puts("file renamed sussfully\n");
    }
    else{
        puts("error\n");
    }
// getch();





}
