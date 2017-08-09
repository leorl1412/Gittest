#include <stdio.h>

int main(){
	

	FILE *fp;
	char ch;
	fp = fopen("leo.txt","r");

	while(1){
		ch=fgetc(fp);
		if (ch==EOF) break;
		printf("%c", ch);
	}
	
	fclose(fp);
	/*
		fscanf(fp, "%s", ch);
	    printf("%s", ch);
	    */

}
