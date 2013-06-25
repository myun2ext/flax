#include "myun2/flax/util/pipelike.hpp"
#include "myun2/flax/io/stdinput.hpp"
#include "myun2/flax/io/stdoutput.hpp"

using namespace myun2::flax;

class echoback :
	public pipelike<io::stdinput, io::stdoutput>
{
	bool action(const T& v) {
		writer.write(v);
		return true;
	}
};

int main(
	int argc, char *argv[]
)
{
	echoback eb;
	eb.run();
	return 0;
}
