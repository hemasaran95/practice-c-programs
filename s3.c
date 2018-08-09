#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf("Enter the number:");
    scanf("%d",& num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
            continue;
        }
        else
        {
            continue;
        }
    }
    if(sum==num)
    {
        printf("Given number is a perfect number!!!");
    }
    else
    {
        printf("Not a perfect number!!!");
    }
}
