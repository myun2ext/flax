#ifndef __github_com_myun2__flax__i1o3_HPP__
#define __github_com_myun2__flax__i1o3_HPP__

// Input:1, Output:3

namespace myun2
{
	namespace flax
	{
		template <typename Reader, typename Writer1, typename Writer2, typename Writer3>
		class i1o3
		{
		protected:
			Reader reader;
			Writer1 writer1;
			Writer2 writer2;
			Writer3 writer3;
		public:
			typedef typename Reader::T T, Type;

			i1o3(){}
			i1o3(const Reader &in_reader
			     const Writer1 &in_writer1,
			     const Writer2 &in_writer2,
			     const Writer3 &in_writer3
			    )
				: reader(in_reader), writer1(in_writer1), writer2(in_writer2), writer3(in_writer3) {}
		};
	}
}

#endif//__github_com_myun2__flax__i1o2_HPP__
