#ifndef __github_com_myun2__flax__examples__xml_parser_HPP__
#define __github_com_myun2__flax__examples__xml_parser_HPP__

#include "myun2/flax/util/ws_split_reader.hpp"

namespace myun2
{
	namespace flax
	{
		namespace example
		{
			namespace xml_parser_internal
			{
				struct xml_header
				{
					static const char* version_str() const { return "version"; }
					static const char* encoding_str() const { return "encoding"; }
					static const char* standalone_str() const { return "standalone"; }

					std::string version;
					std::string encoding;
					std::string standalone;
				};
			}

			/////////////

			template <typename ReadStream>
			class xml_parser :
				public stack_machine<ws_split_reader<int, ReadStream> >
			{
			protected:
				bool action(const ::std::string& token)
				{
					state
					return true;
				}
			};
		}
	}
}

#endif//__github_com_myun2__flax__examples__xml_parser_HPP__
