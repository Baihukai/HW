#include<stdio.h>

int main()
{
	float kg;
	float miter;
	float BMI;
	
	printf("Input : ");
	scanf("%f %f", &kg, &miter);

	BMI = kg / (miter * miter);

	if(BMI<18.5)
	{printf("비만 위험 낮음\b");}

	else if(BMI>18.5 && BMI<22.9){printf("비만 위험 보통\b");}
	else {printf("비만 위험 높음\n");}
	
	return 0;
}
