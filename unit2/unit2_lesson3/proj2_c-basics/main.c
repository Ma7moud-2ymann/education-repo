#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    printf("enter z:");
    scanf("%d",&z);
    if (x>y && x>z)
    {
        printf("x is the largest number: %d",x);
    }
    else if (y>x && y>z)
    {
        printf("y is the largest number: %d",y);
    }
    else if (z>x && z>y)
    {
        printf("z is the largest number: %d",z);
    }
    return 0;
}
