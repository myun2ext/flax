#ifndef __github_com_myun2__flax__io__line_writer_HPP__
#define __github_com_myun2__flax__io__line_writer_HPP__

#include <string>

namespace myun2
{
	namespace flax
	{
		namespace util
		{
			template <typename _Writer>
			class line_writer : public _Writer
			{
			public:
				line_writer(){}
				line_writer(const _Writer &w) : _Writer(w){}

				typedef const char* T;
				void write(const char* s) {
					while(*s) {
						_Writer::write(*s++);
					}
				}
				void write(const ::std::string &s) { write(s.c_str()); }
			};
		}
	}
}

#endif//__github_com_myun2__flax__io__line_writer_HPP__
