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

class WamlNullLine
{
};

////////////////////////////////
WamlLine waml_parse_line(::std::string line)
{
	//printf("%s\n");
	switch(line[0])
	{
	case '-':
		if ( line[1] == '-' )
			return WamlSeparateLine;
	case '*':
		break;
	case '=':
		if ( line[1] == '=' )
			return WamlSeparateLine;
	case ' '
		break;
	default:
	}
	
	return WamlNullLine;
}

WamlDocument waml_read(const char* p)
{
	WamlDocument doc;
	::std::string line;
	for(; *p; p++)
	{
		if ( *p == '\n' )
			doc += flax_line(line);
		else
			line += *p;
	}
	return doc;
}
