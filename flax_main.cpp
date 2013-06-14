#include "myun2/flax/io/stdinput.hpp"
#include "myun2/flax/io/stdoutput.hpp"
#include "myun2/flax/stack_machine.hpp"

using namespace myun2::flax;

int main(
	int argc, char *argv[]
)
{
	stack_machine<io::stdinput, io::stdoutput> machine;

	return 0;
}
