#include <Idle.h>
#include <landing.h>

#include <string>

void Landing::idle(PlayerFSM* a)
{
	std::cout << "Landing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}