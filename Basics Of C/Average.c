//Average of User inputted numbers
#include<stdio.h>
void main()
{
    int n,i,a,b=0;
    printf("\nAverage of n numbers\nEnter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a number:");
        scanf("%d",&a);
        b+=a;
    }
    printf("Average =%d",b/n);
}