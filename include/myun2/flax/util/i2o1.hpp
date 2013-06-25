#ifndef __github_com_myun2__flax__i2o1_HPP__
#define __github_com_myun2__flax__i2o1_HPP__

// Input:2, Output:1

namespace myun2
{
	namespace flax
	{
		template <typename Reader1, typename Reader2, typename Writer>
		class i2o1
		{
		protected:
			Reader1 reader1;
			Reader2 reader2;
			Writer writer;
		public:
			typedef typename Reader1::T T, Type;

			i2o1(){}
			i2o1(const Reader1 &in_reader1, const Reader2 &in_reader2, const Writer &in_writer)
				: reader1(in_reader1), reader2(in_reader2), writer(in_writer) {}
		};
	}
}

#endif//__github_com_myun2__flax__i1o1_HPP__
