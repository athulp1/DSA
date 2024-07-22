//without gets and put
//input :- ATHUL GANAPATI PUJARI
//output:- athul

/*#include<stdio.h>
int main()
{
    char a[100];
    printf("enter the string\n");
    scanf("%s",a);
    printf("%s",a);
}


// WITH GETS INSTEAD SCANF

#include<stdio.h>
int main()
{
    char a[100];
    printf("enter the string\n");
    //scanf("%s",a);
    gets(a);
    printf("%s",a);
}
*/
// WE CAN USE PUTS INSTEAD PRINTF

#include<stdio.h>
int main()
{
    char a[100];
    printf("enter the string\n");
    //scanf("%s",a);
    //printf("%s",a);
    gets(a);
    puts(a);
}

