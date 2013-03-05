#include <stdio.h>
#include <string>

class WamlSeparateLine // Splitter
{
};

class WamlLine
{
};

class WamlProperty
{
};

class WamlListItem
{
};

class WamlList
{
};

class WamlDocument
{
};

////////////////////////////////
WamlLine waml_line(const char* line)
{
	printf("%s\n");
	return 0;
}

WamlDocument waml_read(const char* p)
{
	WamlDocument doc;
	::std::string line;
	for(; *p; p++)
	{
		if ( *p == '\n' )
			doc += flax_line(line.c_str());
		else
			line += *p;
	}
	return doc;
}
