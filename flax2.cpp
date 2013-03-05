#include <stdio.h>

int flax_readfile(const char* filename);

int main(int argc, char *argv[])
{
	if ( argc == 1 ) {
		fprintf(stderr, "usage: flax <Compile File Name>\n");
		return 1;
	}

	const char* flax_file = argv[1];

	return flax_readfile(flax_file);
}

int flax_readfile(const char* filename)
{
	FILE* fp = fopen(filename, "r");
	if ( fp == NULL ) {
		fprintf(stderr, "flax File Open Error. %s\n", filename);
		return 1;
	}

	return 0;
}
