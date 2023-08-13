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
       int n = lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printtf("if the %d of %d is greater than 5: the string %d is greater than 5\n", lastd);
	else if (n == 0)
		printf("if the %d of %d is 0: the string %d is 0\n", lastd);
	else if (n < 6 && n == 0)
		printf("if the %d of %d is less than 6 and not 0: the string %d is less than 6 and not 0\n", lastd);

         return (0); 
 }
