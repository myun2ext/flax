#include "myun2/flax/io/stdinput.hpp"
#include "myun2/flax/io/stdoutput.hpp"
#include "myun2/flax/stack_machine.hpp"

using namespace myun2::flax;

class example_machine :
	public stack_machine<int, io::stdinput, io::stdoutput>
{
public:
	bool action(const T& v)
	{
		write(v);
		if ( v == '\n' ){
			puts("> ");
		}
		return true;
	}
};

int main(
	int argc, char *argv[]
)
{
	example_machine machine;
	machine.run();

	return 0;
}
