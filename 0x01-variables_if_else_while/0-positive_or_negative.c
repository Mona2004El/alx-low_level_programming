#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - Entry function
 *
 *discription: Positive anything is better than negative nothing
 *RETURN: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		/* if the number is greater than 0: is positive */

			printf(" %d is positive", n);

	else if (n == 0)
		/* if the number is 0: is zero */

			printf(" %d is zero", n);

	else
			printf(" %d is negative", n);


	printf("\n");
return (0);
}
