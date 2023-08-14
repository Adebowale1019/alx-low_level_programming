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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit 0f %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if ((n % 10 < 6) && n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
 }
