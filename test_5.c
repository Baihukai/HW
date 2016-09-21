#include<stdio.h>

int main()
{
	int number = 1;
	int i = 0;
	int discount = 1;
	scanf("%d", &number);

	while(1){
	
	if(number>discount)
	{
		number-=discount * 6;
		i++;
		continue;
	}
	else
	{
		i++;
		break;
	}

}
	
	printf("%d\n", i);

	return 0;
}
