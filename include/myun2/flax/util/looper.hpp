#ifndef __github_com_myun2__flax__util__looper_HPP__
#define __github_com_myun2__flax__util__looper_HPP__

namespace myun2
{
	namespace flax
	{
		struct looper
		{
			virtual bool action() =0;
			void run() { while( action() ) {} }
		};
	}
}


#endif//__github_com_myun2__flax__util__looper_HPP__
