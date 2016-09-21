#include<stdio.h>

int main()
{
	int val;
	int room = 1;
	int count;

	scanf("%d", &val);

	for(count = 1 ; room < val ; count++){
		room += count*6;
	}
	
	printf("%d\n", count);
	return 0;
}
