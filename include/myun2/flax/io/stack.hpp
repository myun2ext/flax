#ifndef __github_com_myun2__flax__io__stack_HPP__
#define __github_com_myun2__flax__io__stack_HPP__

#include <stack>

namespace myun2
{
	namespace flax
	{
		template <typename T>
		class stack
		{
		private:
			::std::stack<T> m_stack;
		public:
			void write(const &T x) { push(x); }
			void push(const &T x) { m_stack.push(x); }
			T pop() { return m_stack.pop(); }
			T read() { return m_stack.pop(); }
		};
	}
}

#endif//__github_com_myun2__flax__io__stack_HPP__
