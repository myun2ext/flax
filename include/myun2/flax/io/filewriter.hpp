#ifndef __github_com_myun2__flax__io__filewriter_HPP__
#define __github_com_myun2__flax__io__filewriter_HPP__

#include <stdio.h>

namespace myun2
{
	namespace flax
	{
		namespace io
		{
			struct filewriter_open_error {};

			class filewriter
			{
			private:
				FILE* fp;
			public:
				filereader(const char* path, bool binary=true) {
					fp = fopen(path, binary ? "rb" : "r");
					if ( fp == NULL )
						throw filewriter_open_error();
				}
				typedef int T;
				void write(int c) { putchar(c); }
			};
		}
	}
}

#endif//__github_com_myun2__flax__io__stdoutput_HPP__
