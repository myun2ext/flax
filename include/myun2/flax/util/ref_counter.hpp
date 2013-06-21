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
				unsigned int count;
				void up() { ++count; }
				void down() { --count; }
				unsigned int count_value() const { return count; }
			};
		}
	}
}


#endif//__github_com_myun2__flax__util__ref_counter_HPP__
