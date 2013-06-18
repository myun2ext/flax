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
			typedef typename ReadStream::T T, Type;
			serial_runner(){}
			serial_runner(const ReadStream &in_reader, const WriteStream &in_writer)
				: runner<ReadStream, WriteStream>(in_reader, in_writer) {}
			
			virtual bool action(const T& v)=0;
			void run()
			{
				while(1)
				{
					Type v = read();
					if ( eor() )
						break;
					if ( !action(v) )
						break;
				}
			}
		};
	}
}
#endif//__github_com_myun2__flax__serial_runner_HPP__
