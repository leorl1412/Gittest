#include<stdio.h>

int main(){

int Leo = 10;

printf ("Leo: %d \n", Leo);

Leo += 2;

printf ("Leo: %d \n", Leo);

Leo -= 4;

printf ("Leo: %d \n", Leo);

Leo *= 5;

printf ("Leo: %d \n", Leo);

Leo /= 4;

printf ("Leo: %d \n", Leo);

int value; 

value = ((Leo % 2) == 0) ? 5 : 7;

printf ("Value: %d \n \a", value);

}
