#ifndef __github_com_myun2__flax__io__stdoutput_HPP__
#define __github_com_myun2__flax__io__stdoutput_HPP__

namespace myun2
{
	namespace flax
	{
		struct stdoutput
		{
			void write(int c) { return putchar(c); }
		};
	}
}

#endif//__github_com_myun2__flax__io__stdoutput_HPP__
