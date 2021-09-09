#include <stdio.h>

int main () {
	int num1, num2, num3, min;
	printf("Input number : ");
	scanf("%d",&num1);
	min = num1;
	
	printf("Input number : ");
	scanf("%d",&num2);
	if(num2<min) min = num2;
	
	printf("Input number : ");
	scanf("%d",&num3);
	if (num3<min) min = num3;
	
	printf("%d",num1+num2+num3-min);
	return 0;
}
