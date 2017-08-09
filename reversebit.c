#include <stdio.h>

int main (){
	
	int number;
	printf("Insert a number: ");
	scanf("%d", &number);
	int result = 0;
	unsigned int counter = sizeof(number) * 8 -1;
	
	while(number != 0){
		
		int bit = number & 1;
		result = result | bit;
		result = result << 1;		
		number = number >> 1;
		counter--;
	}
	
	result = result << counter;
	
	printf("The number is: %d \n", result);
}
