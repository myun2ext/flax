#ifndef __github_com_myun2__flax__io__stdinput_HPP__
#define __github_com_myun2__flax__io__stdinput_HPP__

#include <stdio.h>

namespace myun2
{
	namespace flax
	{
		namespace io
		{
			struct stdinput
			{
				typedef int T;
				int read() { return getchar(); }
				bool is_end(int c) const { return c == EOF; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__io__stdinput_HPP__
