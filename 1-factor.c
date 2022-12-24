#include "factor.h"

void factor(char *line)
{
	long unsigned int n, result, factor = 2;

	n = atoi(line);

	for (; factor < (n / 2); factor++)
	{
		if ((n % factor) == 0)
		{
			result = n / factor;
			printf("%lu=%lu*%lu\n",n,result,factor);
			return;
		}
	}
}
