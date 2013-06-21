#ifndef __github_com_myun2__flax__util__shared_resource_HPP__
#define __github_com_myun2__flax__util__shared_resource_HPP__

#include "myun2/flax/util/ref_counter.hpp"

namespace myun2
{
	namespace flax
	{
		namespace util
		{
			template <typename T>
			class shared_resource
			{
			private:
				typedef T Resrouce;
				typedef ref_counter Counter;
				Counter reference_counter;
				Resrouce r;
			protected:
				Resrouce& _resource() { return r; }
				const Resrouce& _resource() const { return r; }
				Resrouce& get_resource() { return r; }
				const Resrouce& get_resource() const { return r; }

				virtual void release() =0;

			public:
				shared_resource()
				{
					reference_counter.up();
				}
				shared_resource(const Resrouce& r_in)
					: r(r_in)
				{
					reference_counter.up();
				}
				virtual ~shared_resource()
				{
					reference_counter.down();
					if ( reference_counter.is_zero() )
						release();
				}
			};
		}
	}
}

#endif//__github_com_myun2__flax__util__shared_resource_HPP__
