#include<stdio.h>
int main()
{
	int i,n,count=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=0;
        }
	}
	if(count==1)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
	return 0;		
}
