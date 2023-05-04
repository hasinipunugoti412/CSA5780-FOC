#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number upto :");

	scanf("%d",&n);
	printf("All even numbers from 1 to %d are ",n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
}
