#ifndef __github_com_myun2__flax__io__stdoutput_HPP__
#define __github_com_myun2__flax__io__stdoutput_HPP__

#include <stdio.h>

namespace myun2
{
	namespace flax
	{
		namespace io
		{
			struct stdoutput
			{
				typedef int T;
				void write(int c) { putchar(c); }
			};
		}
	}
}

#endif//__github_com_myun2__flax__io__stdoutput_HPP__
