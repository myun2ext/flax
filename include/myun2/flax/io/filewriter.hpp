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
				FILE* m_fp;
			public:
				filewriter(const char* path, bool binary=true) {
					m_fp = fopen(path, binary ? "wb" : "w");
					if ( m_fp == NULL )
						throw filewriter_open_error();
				}
				virtual ~filewriter() {
					fclose(m_fp);
				}
				typedef int T;
				void write(int c) { putc(c, m_fp); }
			};
		}
	}
}

#endif//__github_com_myun2__flax__io__stdoutput_HPP__
