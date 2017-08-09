#include <stdio.h>

int main(){
	

	FILE *fp;
	fp = fopen("leo2.txt","w+");
	int age = 25;
	char name[]="LEO LEO";
	fprintf(fp, "%s %d", name, age);
	
	fclose(fp);
	
}
