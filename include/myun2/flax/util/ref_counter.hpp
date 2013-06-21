#ifndef __github_com_myun2__flax__util__ref_counter_HPP__
#define __github_com_myun2__flax__util__ref_counter_HPP__

namespace myun2
{
	namespace flax
	{
		namespace util
		{
			struct ref_counter
			{
				unsigned int m_count;
				void up() { ++m_count; }
				void down() { --m_count; }
				unsigned int count() const { return m_count; }
				bool is_zero() const { return m_count == 0; }
			};
		}
	}
}


#endif//__github_com_myun2__flax__util__ref_counter_HPP__
