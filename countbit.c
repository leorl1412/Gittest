#include <stdio.h>

int main (){
	
	int number;
	printf("Insert a number: ");
	scanf("%d", &number);
	int counter = 0;
	
	while(number != 0){
		
		int mask = number - 1;
		number = number & mask;
		counter++;
	}
	
	printf("Number of 1 bits: %d \n",counter);
	
}
