#ifndef __github_com_myun2__flax__pipelike_HPP__
#define __github_com_myun2__flax__pipelike_HPP__

#include "myun2/flax/util/serial_reader.hpp"

namespace myun2
{
	namespace flax
	{
		template <typename Reader, typename Writer>
		class pipelike : public serial_reader<Reader>
		{
		private:
			typedef serial_reader<Reader> _Base;
		protected:
			Writer writer;
		public:
			typedef typename Reader::T T, Type;

			pipelike(){}
			pipelike(const Reader &in_reader, const Writer &in_writer) : _Base(in_reader), writer(in_writer) {}
		};
	}
}

#endif//__github_com_myun2__flax__pipelike_HPP__
