#include <stdio.h>
#include <string>

int flax_line(const char* line)
{
	return 0;
}

int flax_parse(const char* p)
{
	::std::string line;
	for(; *p; p++)
	{
		if ( *p == '\n' )
			flax_line(line.c_str());
		else
			line += *p;
	}
	return 0;
}
