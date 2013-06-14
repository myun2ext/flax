#ifndef __github_com_myun2__flax__serial_runner_HPP__
#define __github_com_myun2__flax__serial_runner_HPP__

#include "myun2/flax/runner.hpp"

namespace myun2
{
	namespace flax
	{
		template <typename ReadStream, typename WriteStream>
		class serial_runner : public runner<ReadStream, WriteStream>
		{
		public:
			serial_runner(){}
			serial_runner(const ReadStream &reader, const WriteStream &writer)
				: runner<ReadStream, WriteStream>(reader, writer) {}
			void run()
			{

			}
		};
	}
}
#endif//__github_com_myun2__flax__serial_runner_HPP__
