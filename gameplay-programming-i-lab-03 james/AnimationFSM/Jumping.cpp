#include <Jumping.h>
#include <falling.h>
#include <Idle.h>

#include <string>

void Jumping::idle(PlayerFSM* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::falling(PlayerFSM* a)
{
	std::cout << "Jumping -> falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}