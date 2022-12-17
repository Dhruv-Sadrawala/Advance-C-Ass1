#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter any character : ");
    scanf("%c",&a);
    
    if(isalpha(a))
    {
        if(isupper(a))
        {
            printf("Character entered is uppercase letter .\n");
        }
        else{
            printf("Character entered is lowercase letter .\n");
        }
    }
    else if(isdigit(a))
        printf("\nCharacter entered is digit\n");
    else
        printf("\nCharacter entered is special character");

}