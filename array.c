#include<stdio.h>
void main()
{
int a[20],n,i,j;
printf("ënter the no");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
    printf("reverse");
for(i=n-1;i>=0;i--)
{
    printf("%d ",a[i]);
}

}

