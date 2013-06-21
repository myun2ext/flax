#ifndef __github_com_myun2__flax__util__shared_resource_HPP__
#define __github_com_myun2__flax__util__shared_resource_HPP__

#include "myun2/flax/util/ref_counter.hpp"

namespace myun2
{
	namespace flax
	{
		namespace util
		{
			template <typename T>
			class shared_resource
			{
			private:
				typedef T Resrouce;
				typedef ref_counter Counter;
				Counter counter;
				Resrouce r;
			protected:
				virtual release() =0;
				
			};
		}
	}
}

#endif//__github_com_myun2__flax__util__shared_resource_HPP__
