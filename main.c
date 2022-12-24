#include "factor.h"

int main(int argc, char *argv[])
{
	char *args;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}

	read_file(argv[1]);
	
	exit(EXIT_SUCCESS);
}
