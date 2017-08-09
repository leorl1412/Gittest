#include <stdio.h>

int main(){

int age;
char name[100];

printf("\nPlease enter your name, age: ");
scanf("%s%d" , name, &age);

printf("Hola: %s%d", name, age);

return 0;

}
