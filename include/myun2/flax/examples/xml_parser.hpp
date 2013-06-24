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
