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
			switch(x%2)
			{
				case 0:printf("*");break;
				default:printf(" ");break;
			}
		}
		printf("\n");		
	}
	return 0;
}

