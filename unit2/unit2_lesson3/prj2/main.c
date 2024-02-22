#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b;
    int minumum;
    printf("enter a and b :");
    scanf("%d %d",&a,&b);
    minumum =(a<b) ?a :b;
    printf("minumum is equal to : %d",minumum);
    return 0;
}
