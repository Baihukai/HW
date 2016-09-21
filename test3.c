#include<stdio.h>

int main()
{

	int number;
	int i;
	printf("Input number : ");
	
	scanf("%d", &number);
	
	for(i=1;i<=5;i++){
	printf("%d번째 배수 : %d\n",i,  number*i);
	}

	return 0;
}
