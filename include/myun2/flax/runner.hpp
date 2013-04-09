#ifndef __github_com_myun2__flax__runner_HPP__
#define __github_com_myun2__flax__runner_HPP__

#include "myun2/flax/parsed.hpp"

namespace myun2
{
	namespace flax
	{
		template <typename _Result=int, typename _Context=char*>
		class runner : public runnable<_Result, _Context>
		{
		public:
			_Result run(const _Context& context)
			{
				_Result r;

				_Context p = context;
				while(*p)
				{
					printf("%c", *p);
					++p;
				}

				return r;
			}
		};
	}
}

#endif//__github_com_myun2__flax__runner_HPP__
