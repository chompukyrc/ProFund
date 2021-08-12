#include <stdio.h>

int main () {
	double Weight,Height,BMI;
	printf("Enter your weight (kg) :");
	scanf("%lf",&Weight);
	printf("Enter your Height (m) :");
	scanf("%lf",&Height);
	BMI = Weight/(Height*Height);
	printf("BMI = %lf\n",BMI);
	
	if(BMI < 18.5){
		printf("Underweight");
	}
	else if(18.5 < BMI < 24.9){
		printf("Normal");
	}
	else if(25.0 < BMI < 29.9){
		printf("Overweight");
	}
	else if(BMI > 30){
		printf("Obesity");
	}
	return 0;
}
