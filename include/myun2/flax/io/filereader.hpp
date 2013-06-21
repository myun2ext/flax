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
				FILE* m_fp;
			public:
				filereader(const char* path, bool binary=true) {
					m_fp = fopen(path, binary ? "rb" : "r");
					if ( m_fp == NULL )
						throw filereader_open_error();
				}
				virtual ~filereader() {
					fclose(m_fp);
				}
				typedef int T;
				int read() { return getc(m_fp); }
				bool is_end() const { return feof(m_fp) != 0; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__io__filereader_HPP__
