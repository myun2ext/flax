#include "myun2/flax/serial_runner.hpp"
#include "myun2/flax/io/stdinput.hpp"
#include "myun2/flax/io/stdoutput.hpp"

using namespace myun2::flax;

class echoback :
	public serial_runner<io::stdinput, io::stdoutput>
{
public:
	bool action(const T& v) {
		write(v);
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
