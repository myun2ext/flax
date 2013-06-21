#ifndef __github_com_myun2__flax__util__ws_split_reader_HPP__
#define __github_com_myun2__flax__util__ws_split_reader_HPP__

#include <string>

namespace myun2
{
	namespace flax
	{
		namespace util
		{
			template <typename _Reader>
			class ws_split_reader : public _Reader
			{
			private:
				bool is_ws(int c)
				{
					switch(c)
					{
						case ' ' :
						case '\t':
						case '\r':
						case '\n':
							return true;
					}
					return false;
				}
			public:
				ws_split_reader(){}
				ws_split_reader(const &_Reader r) : _Reader(r){}

				typedef ::std::string T;
				::std::string read() {
					::std::string buf;
					while(1) {
						int c = _Reader::read();
						if ( is_end() )
							break;
						if ( is_ws(c) )
							continue;
						buf += c;
					}
					return buf;
				}
				bool is_end() const { return _Reader::is_end(); }
			};
		}
	}
}

#endif//__github_com_myun2__flax__util__ws_split_reader_HPP__
