#ifndef __github_com_myun2__flax__examples__xml_document_HPP__
#define __github_com_myun2__flax__examples__xml_document_HPP__

#include <string>
#include <vector>
#include <map>

namespace myun2
{
	namespace flax
	{
		namespace example
		{
			struct xml_header
			{
				static const char* version_str() const { return "version"; }
				static const char* encoding_str() const { return "encoding"; }
				static const char* standalone_str() const { return "standalone"; }

				::std::string version;
				::std::string encoding;
				::std::string standalone;
			};

			struct xml_element_content
			{
				::std::vector<> text_allocates;
			private:
				::std::vector<xml_element> element_allocates;
				::std::vector<::std::string> text_allocates;
			};

			struct xml_element
			{
			private:
				struct node {
					enum {
						text,
						element
					} type_ type;
					void* ptr;	//	xml_element or ::std::string pointer.
				};
				::std::vector<xml_element> element_allocates;
				::std::vector<::std::string> text_allocates;
			public:
				::std::string name;
				::std::map<std::string, std::string> attributes;
				::std::vector<node> childs;
			};

			struct xml_document
			{
				xml_header header;
				xml_element root;
			};
		}
	}
}

#endif//__github_com_myun2__flax__examples__xml_document_HPP__
