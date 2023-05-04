#include<stdio.h>
 int main()
{
  	int i,num;
 	printf("Enter number upto= ");
  	scanf("%d",&num);
  	printf("Odd Numbers between 1 and %d are = ",num);
  	for(i=1;i<=num;i=i+2)
  	{
		printf("%d",i);
  	}
 	return 0;
}

