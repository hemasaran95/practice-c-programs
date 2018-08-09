#include<stdio.h>
void main()
{
    long int a,num;
    int rem,sum=0;
    printf("Enter the number:");
    scanf("%ld",&num);
    a=num;
    if(num>0)
    {
        while(num>0)
        {
         rem=num%10;
         sum=sum+rem;
         num=num/10;
        }
        printf("sum of digits in %ld is:%d",a,sum);
    }
    else
    {
        printf("Enter a valid number!!!");
    }
    return 0;
}


