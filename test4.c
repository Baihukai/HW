#include<stdio.h>

int main()
{
	int number;
	int i;
	int j;

	printf("Input number x (1<=x<=9) :");
	while(1){
	scanf("%d", &number);
	if(number>=1&&number<=9){
		break;
	}
	}
	for(i=0; i< number; i++){
		for(j=0; j<= number*2; j++){
		if(j>=number-i&&j<=number+i){
		printf("*");
		}
		else{
		printf("0");
		}
	
	}	printf("\n");
	}
	return 0;
}
