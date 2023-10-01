#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (n>0)
	{
		printf("%d is a positive",n);
	}
	else if (n<0)
	{
		printf("%d is negetive",n);
	}
	else if (n=0)
	{
    	printf("%d is equal to zero",n);
	}
    return 0;
}
