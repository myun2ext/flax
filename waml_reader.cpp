#include <stdio.h>
#include <vector>
#include <string>

class WamlText
{
};

class WamlLine
{
};

class WamlLineBase
{
};

class WamlSeparate : public WamlLineBase // Splitter
{
};

class WamlProperty : public WamlLineBase
{
};

class WamlListItem : public WamlLineBase
{
};

class WamlList : public WamlLineBase
{
};

class WamlNullLine : public WamlLineBase
{
};

/////

class WamlSubDocument
{
private:
public:
};

class WamlDocument
{
private:
	::std::vector<WamlSubDocument> m_sub_documents;
public:
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
