#include <stdio.h>

int main () {
	int num, min = 200000000 , max = -200000000, i, sum;
	for(i=0 ; i<3 ; i++)
	{
		printf("Input Number : ");
		scanf("%d",&num);
		sum += num;
		if (num>max) max = num;
		if (num<min) min = num;
	}
	printf("Min = %d\nMax = %d\nMean = %d",min, max, sum-min-max);
	return 0;
}
