#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum+=i;
    printf("The sum of the series = %d",sum);
}
