#include <stdio.h>

int main () 
{
	int num, total, a, b, c;
	printf("Input Number : ");
	scanf("%d",&num);	
	while(num>0){
		total = num%10;
		a = total;
		printf("%d.",a);
		num /= 10;
			
		total = num%10;
		b = total;
		printf("%d.",b);
		num /= 10;
			
		total = num%10;
		c = total;
		printf("%d",c);
		num /= 10;
			
		total = a*b*c;
		printf(" = %d\n",total);
		num = total;
	}
}

