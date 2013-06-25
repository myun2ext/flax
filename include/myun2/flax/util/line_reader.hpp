#ifndef __github_com_myun2__flax__util__line_reader_HPP__
#define __github_com_myun2__flax__util__line_reader_HPP__

#include <string>

namespace myun2
{
	namespace flax
	{
		namespace util
		{
			template <typename _Reader>
			class line_reader : public _Reader
			{
			public:
				line_reader(){}
				line_reader(const &_Reader r) : _Reader(r){}

				typedef ::std::string T;
				::std::string read() {
					::std::string buf;
					while(1) {
						int c = _Reader::read();
						if ( is_end() )
							break;
						if ( c == '\r' c == '\n' )
							break;
						buf += c;
					}
					return buf;
				}
				bool is_end() const { return _Reader::is_end(); }
			};
		}
	}
}

#endif//__github_com_myun2__flax__util__line_reader_HPP__
