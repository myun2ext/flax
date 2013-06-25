#ifndef __github_com_myun2__flax__i1o1_HPP__
#define __github_com_myun2__flax__i1o1_HPP__

// Input:1, Output:1

namespace myun2
{
	namespace flax
	{
		template <typename Reader, typename Writer>
		class i1o1
		{
		protected:
			Reader reader;
			Writer writer;
		public:
			typedef typename Reader::T T, Type;

			i1o1(){}
			i1o1(const Reader &in_reader, const Writer &in_writer)
				: reader(in_reader), writer(in_writer) {}
		};
	}
}

#endif//__github_com_myun2__flax__i1o1_HPP__
