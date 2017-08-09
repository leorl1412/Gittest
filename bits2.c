#include <stdio.h>

int main(){
	
	 int N;
	
	printf("Which number do you want to print in bits: ");
	scanf("%d", &N);
	
	int size = sizeof(N) * 8;
	
	int n = 0;
	
	int bits [size];
	
	printf("%ld \n", sizeof(N));
	
	while (n < size){
		int shift = 1 << n;
		int bit = (shift) & N;
		
		if(bit == shift){
			bits[n] = 1;
		}
		else bits[n] = 0;
		
		printf("%d ", bits[n]);
		n++;		
	}	
}
