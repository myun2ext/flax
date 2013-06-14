#ifndef __github_com_myun2__flax__io__filereader_HPP__
#define __github_com_myun2__flax__io__filereader_HPP__

#include <stdio.h>

namespace myun2
{
	namespace flax
	{
		namespace io
		{
			struct filereader_open_error {};
			
			class filereader
			{
			private:
				FILE* fp;
			public:
				filereader(const char* path, bool binary=true) {
					fp = fopen(path, binary ? "rb" : "r");
					if ( fp == NULL )
						throw filereader_open_error();
				}
				typedef int T;
				int read() { return getc(fp); }
				bool is_end(int c) const { return c == EOF; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__io__filereader_HPP__
