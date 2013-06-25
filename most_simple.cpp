#include "myun2/flax/util/pipelike.hpp"
#include "myun2/flax/util/line_reader.hpp"
#include "myun2/flax/util/line_writer.hpp"
#include "myun2/flax/io/stdinput.hpp"
#include "myun2/flax/io/stdoutput.hpp"

using namespace myun2::flax;
using namespace myun2::flax::util;

class echoback :
	public pipelike<line_reader<io::stdinput>, line_writer<io::stdoutput> >
{
	bool action(const ::std::string& s) {
		writer.write(s + '\n');
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
