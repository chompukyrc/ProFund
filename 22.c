#include <stdio.h>

int main () {
	int num,i,j,x;
	printf("Enter number : ");
	scanf("%d",&num);
	for(i=1 ; i<=num ; i++)
	{
		for(j=1 ; j<=num ; j++)
		{
			x=i+j;
			if(x%2==0)
			{
				printf("*");	
			}
			else
			{
				printf(" ");	
			}
		}
		printf("\n");		
	}
	return 0;
}

