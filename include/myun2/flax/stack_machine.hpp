#ifndef __github_com_myun2__flax__stack_machine_HPP__
#define __github_com_myun2__flax__stack_machine_HPP__

namespace myun2
{
	namespace flax
	{
		template <typename ReadStream, typename WriteStream>
		class stack_machine
		{
		private:
			ReadStream m_reader;
			WriteStream m_writer;
		public:
			stack_machine(){}
			stack_machine(const ReadStream &reader, const WriteStream &writer)
				: m_reader(reader), m_writer(writer) {}
			void run()
			{
			}
		};
	}
}

#endif//__github_com_myun2__flax__stack_machine_HPP__
