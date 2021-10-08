#include <stdio.h>
#include <math.h>

int main () {
	double h[10], xBar=0, sum=0, difference;
	int i;
	
//input number	
	for(i=0;i<10;i++)
	{
		scanf("%lf",&h[i]);
	}
	
//average	
	for(i=0;i<10;i++)
	{
		xBar+=h[i];
	}
	xBar/=10;
	
//sum
	for(i=0;i<10;i++)
	{
		difference = pow((h[i]-xBar),2);
		sum += difference;
	}
	sum /= 9;
	
//sqrt
	printf("%lf",sqrt(sum));
	
	return 0 ;
}
