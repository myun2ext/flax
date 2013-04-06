#include <stdio.h>

int main()
{
	puts((const char*)read_file("hiragana.data"));

	return 0;
}