#ifndef __github_com_myun2__flax__examples__xml_parser_HPP__
#define __github_com_myun2__flax__examples__xml_parser_HPP__

#include "myun2/flax/util/ws_split_reader.hpp"

namespace myun2
{
	namespace flax
	{
		namespace example
		{
			template <typename ReadStream, typename WriteStream>
			class xml_parser :
				public ws_split_reader<int, ReadStream, WriteStream>
			{
			protected:
				bool action(const T& v)
				{
					write(v);
					if ( v == '\n' ){
						puts("> ");
					}
					return true;
				}
			};
		}
	}
}

#endif//__github_com_myun2__flax__examples__xml_parser_HPP__
