#include <stdio.h>

int main(){
	
	int N;
	printf("Which N bit value do you need to know: ");
	scanf("%d", &N);
	
	int bits = 1 << N;
	
	int value = bits & 98;
	
	if (value == bits){
		
		printf("El valor es 1 \n");
		
		}
	else 
	
	printf("El valor es 0 \n");
		
	
}
