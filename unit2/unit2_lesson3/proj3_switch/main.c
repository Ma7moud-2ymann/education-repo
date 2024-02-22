
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char choice;
    printf("enter the reduis of circle:");
    fflush(stdin); fflush(stdout);
    scanf(" %d",&x);
    printf("enter your choice ( a to print area or c to print circumference):");
    fflush(stdin); fflush(stdout);
    scanf(" %c",&choice);
    switch(choice)
    {
    case 'c':
    {
        printf("the circumference of circle is: %f", 2*3.14*x);
    }
    break;
    case 'a':
    {
        printf("the area of circle is: %f", (3.14)*x*x);
    }
    break;
    default:
    {
        printf("wrong answer");
    }
    break;
    }
    return 0;
}
