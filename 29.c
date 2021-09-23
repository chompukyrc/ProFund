#include <stdio.h>

int main ()
{
	double num,total ;
	for(int i=0 ; i<10 ; i++)
	{
		printf("Height of preson %d (cm) : ",i+1);
		scanf("%lf",&num);
		total+=num;
	}
	printf("Total height of 10 people is %.2lf\n",total);
	printf("Average height of 10 people is %.2lf",total/10);
}
