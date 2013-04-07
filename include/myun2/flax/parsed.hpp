#ifndef __github_com_myun2__flax__parsed_HPP__
#define __github_com_myun2__flax__parsed_HPP__

namespace myun2
{
	namespace flax
	{
		template <typename _Result=int, typename _Context=void*>
		class runnable
		{
		public:
			virtual _Result run(const _Context& con) = 0;
		};

		class executable
		{
		};
	}
}

#endif//__github_com_myun2__flax__parsed_HPP__
