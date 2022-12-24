#include "factor.h"

void read_file(char *file)
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	
	stream = fopen(file, "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Cannot open file: %s\n", file);
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&line, &len, stream)) != -1)
	{
		factor(line);
	}
}
