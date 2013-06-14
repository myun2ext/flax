#ifndef __github_com_myun2__flax__stack_machine_HPP__
#define __github_com_myun2__flax__stack_machine_HPP__

#include "myun2/flax/serial_runner.hpp"

namespace myun2
{
	namespace flax
	{
		template <typename ReadStream, typename WriteStream>
		class stack_machine : public serial_runner<ReadStream, WriteStream>
		{
		public:
			stack_machine(){}
			stack_machine(const ReadStream &reader, const WriteStream &writer)
				: serial_runner<ReadStream, WriteStream>(reader, writer) {}

			bool action(const T& v)
			{
				writer().write(v);
				return true;
			}
		};
	}
}

#endif//__github_com_myun2__flax__stack_machine_HPP__
