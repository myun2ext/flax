#ifndef __github_com_myun2__flax__i3o1_HPP__
#define __github_com_myun2__flax__i3o1_HPP__

// Input:3, Output:1

namespace myun2
{
	namespace flax
	{
		template <typename Reader1, typename Reader2, typename Reader3, typename Writer>
		class i3o1
		{
		protected:
			Reader1 reader1;
			Reader2 reader2;
			Reader3 reader3;
			Writer writer;
		public:
			typedef typename Reader1::T T, Type;

			i3o1(){}
			i3o1(const Reader1 &in_reader1, const Reader2 &in_reader2, const Reader3 &in_reader3,
			     const Writer &in_writer)
				: reader1(in_reader1), reader2(in_reader2), reader3(in_reader3), writer(in_writer) {}
		};
	}
}

#endif//__github_com_myun2__flax__i1o1_HPP__
