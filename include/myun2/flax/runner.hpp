#ifndef __github_com_myun2__flax__runner_HPP__
#define __github_com_myun2__flax__runner_HPP__

namespace myun2
{
	namespace flax
	{
		template <typename ReadStream, typename WriteStream>
		class runner
		{
		private:
			ReadStream m_reader;
			WriteStream m_writer;
		public:
			runner(){}
			runner(const ReadStream &reader, const WriteStream &writer)
				: m_reader(reader), m_writer(writer) {}
			virtual void run()=0;
		};
	}
}

#endif//__github_com_myun2__flax__runner_HPP__
