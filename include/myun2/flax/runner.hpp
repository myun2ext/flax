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
			runner(const ReadStream &in_reader, const WriteStream &in_writer)
				: m_reader(in_reader), m_writer(in_writer) {}

			virtual void run()=0;

			ReadStream& reader(){ return m_reader; }
			WriteStream& writer(){ return m_writer; }
		};
	}
}

#endif//__github_com_myun2__flax__runner_HPP__
