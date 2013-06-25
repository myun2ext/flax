#ifndef __github_com_myun2__flax__i1o2_HPP__
#define __github_com_myun2__flax__i1o2_HPP__

// Input:1, Output:2

namespace myun2
{
	namespace flax
	{
		template <typename Reader, typename Writer1, typename Writer2>
		class i1o2
		{
		protected:
			Reader reader;
			Writer1 writer1;
			Writer2 writer2;
		public:
			typedef typename Reader::T T, Type;

			i1o2(){}
			i1o2(const Reader &in_reader, const Writer1 &in_writer1, const Writer2 &in_writer2)
				: reader(in_reader), writer1(in_writer1), writer2(in_writer2) {}
		};
	}
}

#endif//__github_com_myun2__flax__i1o2_HPP__
