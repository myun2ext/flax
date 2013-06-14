#ifndef __github_com_myun2__flax__io__memory_HPP__
#define __github_com_myun2__flax__io__memory_HPP__

#include <vector>

namespace myun2
{
	namespace flax
	{
		template <typename T>
		class memory
		{
		private:
			::std::vector<T> m_memory;
		public:
			void write(const &T val, size_t pos)
			{
				if ( size() <= pos )
					resize(pos+1, T());
				m_memory[pos] = val;
			}
			T read()
			{
				return m_memory[pos];
			}
		};
	}
}

#endif//__github_com_myun2__flax__io__memory_HPP__
