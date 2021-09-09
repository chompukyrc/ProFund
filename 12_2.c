#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Input number : ");
	scanf("%d",&num1);
	printf("Input number : ");
	scanf("%d",&num2);
	printf("Input number : ");
	scanf("%d",&num3);
	
    if(num1+num2>num1+num3 && num1+num2>num2+num3)
        printf("%d",num1+num2);
    else if(num1+num3>num1+num2 && num1+num3>num2+num3)
        printf("%d",num1+num3);
    else if(num2+num3>num1+num2 && num2+num3>num1+num3)
        printf("%d",num2+num3);
    else if(num1+num2==num1+num3 || num1+num2==num2+num3)
        printf("%d",num1+num2);
    else if(num1+num3==num1+num2 || num1+num3==num2+num3)
        printf("%d",num1+num3);
    else if(num2+num3==num1+num2 || num2+num3==num1+num3)
        printf("%d",num2+num3);
}
