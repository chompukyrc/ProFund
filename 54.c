#include <stdio.h>

int main () {
	int num1,num2,num3,min,max;
	printf("Input Number : ");
	scanf("%d",&num1);
	min=max=num1;
	
	printf("Input Number : ");
	scanf("%d",&num2);
	if (num2>max) max = num2;
	if (num2<min) min = num2;
	
	printf("Input Number : ");
	scanf("%d",&num3);
	if (num3>max) max = num3;
	if (num3<min) min = num3;
	
	printf("Min = %d\nMax = %d\nMean = %d",min, max, num1+num2+num3-min-max);
	return 0;
}
