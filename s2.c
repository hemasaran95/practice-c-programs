#include<stdio.h>
#include<math.h>
void main()
{
    int a,num,rem,dig=0,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
        rem=rem%10;
        dig=dig+1;
        num=num/10;
    }
    num=a;
    while(num>0)
    {
        rem=num%10;
        sum=sum+pow(rem,dig);
        num=num/10;
    }
if(a==sum)
{
    printf("Given number is an armstrong number!!!");
}
else
{
    printf("Not an armstrong number!!!");
}
}
