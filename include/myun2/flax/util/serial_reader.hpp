#ifndef __github_com_myun2__flax__serial_reader_HPP__
#define __github_com_myun2__flax__serial_reader_HPP__

namespace myun2
{
	namespace flax
	{
		template <typename Reader>
		class serial_reader
		{
		private:
			Reader reader;
		public:
			typedef typename Reader::T T, Type;

			serial_reader(){}
			serial_reader(const Reader &in_reader) : reader(in_reader) {}
			
			virtual bool action(const T& v)=0;
			void run()
			{
				while(1)
				{
					Type v = reader.read();
					if ( reader.is_end() )
						break;
					if ( !action(v) )
						break;
				}
			}
		};
	}
}
#endif//__github_com_myun2__flax__serial_reader_HPP__
