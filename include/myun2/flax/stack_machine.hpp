#ifndef __github_com_myun2__flax__stack_machine_HPP__
#define __github_com_myun2__flax__stack_machine_HPP__

#include "myun2/flax/runner.hpp"

namespace myun2
{
	namespace flax
	{
		template <typename ReadStream, typename WriteStream>
		class stack_machine : public runner<ReadStream, WriteStream>
		{
		public:
			stack_machine(){}
			stack_machine(const ReadStream &reader, const WriteStream &writer)
				: runner<ReadStream, WriteStream>(reader, writer) {}
			void run()
			{

			}
		};
	}
}

#endif//__github_com_myun2__flax__stack_machine_HPP__
