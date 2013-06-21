#ifndef __github_com_myun2__flax__util__file_pointer_HPP__
#define __github_com_myun2__flax__util__file_pointer_HPP__

#include <stdio.h>
#include "myun2/flax/util/shared_resource.hpp"

namespace myun2
{
	namespace flax
	{
		namespace util
		{
			class file_pointer
			{
			public:
				shared_resource<FILE*> _fp;
			public:
				file_pointer(FILE* fp) : _fp(fp) {}
				operator FILE*() { return _fp; }
				operator const FILE*() const { return _fp; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__util__file_pointer_HPP__
