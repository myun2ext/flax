#include <stdio.h>
#include <string>

int waml_line(const char* line)
{
	printf("%s\n");
	return 0;
}

int waml_read(const char* p)
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
