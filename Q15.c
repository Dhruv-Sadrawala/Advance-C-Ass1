#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter any character : ");
    scanf("%c",&a);
    
    if(isalpha(a)){
        printf("Character entered is alphabet\n");
    }
    else if(isdigit(a))
        printf("Character entered is digit\n");
    else if
        printf("Character entered is special character\n");

}