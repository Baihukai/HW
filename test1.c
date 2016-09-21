#include<stdio.h>

int main()
{
	
	float kg;
	float miter;

	printf("Input: ");
	scanf("%f %f", &kg, &miter);

	printf("%.2f\n", kg/(miter * miter));

	return 0;
}
