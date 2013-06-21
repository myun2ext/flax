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
			class file_pointer : public shared_resource<FILE*>
			{
			private:
				void release() {
					fclose(get_resource());
				}
			public:
				file_pointer(FILE* fp) : shared_resource<FILE*>(fp) {}
				//shared_resource<FILE*> _fp;
				operator FILE*() { return get_resource(); }
				operator const FILE*() const { return get_resource(); }
			};
		}
	}
}

#endif//__github_com_myun2__flax__util__file_pointer_HPP__
