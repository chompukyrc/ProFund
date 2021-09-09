#include <stdio.h>

int main ()
{
	int num,unit[3];
	printf("Input Number : ");
	scanf("%d",&num);
	while(num)
	{
		int i;
		for(i = 0 ; i < 3 ; i++)
		{
			unit[i] = num%10;
			num /= 10;
		}
		num = unit[0]*unit[1]*unit[2];
		printf("%d.%d.%d = %d\n",unit[0],unit[1],unit[2],num);
	}
}
