#ifndef __github_com_myun2__flax__io__stdinput_HPP__
#define __github_com_myun2__flax__io__stdinput_HPP__

namespace myun2
{
	namespace flax
	{
		struct stdinput
		{
			int read() { return getchar(); }
			bool is_end(int c) { c == EOF; }
		};
	}
}

#endif//__github_com_myun2__flax__io__stdinput_HPP__
