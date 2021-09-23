#include <stdio.h>

int main ()
{
	double h[10],sum;
	int i;
	for(i=0;i<10;i++)
	{
		printf("Height of preson %d (cm) : ",i+1);
		scanf("%lf",&h[i]);
		sum+=h[i];
	}
	printf("Total height of 10 people is %.2lf\n",sum);
	printf("Average height of 10 people is %.2lf",sum/10);
}
