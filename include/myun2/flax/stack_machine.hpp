#ifndef __github_com_myun2__flax__stack_machine_HPP__
#define __github_com_myun2__flax__stack_machine_HPP__

#include "myun2/flax/serial_runner.hpp"
#include <stack>

namespace myun2
{
	namespace flax
	{
		template <typename StateType, typename ReadStream, typename WriteStream>
		class stack_machine : public serial_runner<ReadStream, WriteStream>
		{
		private:
			::std::stack<StateType> m_state_stack;
		protected:
			::std::stack<StateType>& states() { m_state_stack; }
			void push_state(const StateType& state) { m_state_stack.push(state); }
			const StateType& pop_state() { return m_state_stack.pop(); }
			const StateType& current_state() const { return m_state_stack.top(); }
		public:
			typedef typename ReadStream::T T, Type;
			stack_machine(){}
			stack_machine(const ReadStream &reader, const WriteStream &writer)
				: serial_runner<ReadStream, WriteStream>(reader, writer) {}

			bool action(const T& v)
			{
				write(v);
				return true;
			}
		};
	}
}

#endif//__github_com_myun2__flax__stack_machine_HPP__
