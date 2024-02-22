#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum=0;
    for(i=1; i<100;i++)
    {
     sum +=i;
    }
    printf("sum = %d",sum);
    /*************  program2****************/

    int counter;
    int degree;
    int student_number;
    int sum1=0;
    int average;
    scanf(" %d",&student_number);
    for (counter=1;counter<=student_number;counter++)
    {
        printf("Enter student (%d) degree:",counter);
        scanf(" %d",&degree);
        sum1+=degree;

    }
    average=sum1/student_number;
    printf("average of degrees equal : %d",average);
    return 0;
}
