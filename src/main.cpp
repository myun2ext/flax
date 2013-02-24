#include <stdio.h>
#include "file.hpp"
#include "alloc.hpp"

using namespace roast;

int main()
{
	puts((const char*)read_file("hiragana.data"));

	return 0;
}