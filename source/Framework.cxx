
#include <framework/Framework.h>

#include <cstdio>

#include <util/Util.h>


namespace framework
{
	auto Framework () -> void
	{
		std::puts("Framework");

		util::Util();

		return;
	}
}
