#include <stdlib.h>
#include <time.h> 
#include <stdio.h> 
  
 /** 
  * main - Entry point
  * Date : 8/13/2023 10:02pm
  * details:printing last digit number.
  * 
  * Return: Always (Success) 
  */ 
 int main(void) 
 { 
       int n,lastd;
       int lastd => 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastd > 10 && n > 5)
		printf("Last digit 0f %d is %d and is greater than 5\n", n,lastd);
	else if (lastd > 10 && n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	else if(n < 6 && lastd != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);

	return (0);
 }
