#include <Idle.h>
#include <jumping.h>
#include <Climbing.h>
#include <walking.h>

#include <string>

void Walking::idle(PlayerFSM* a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::jumping(PlayerFSM* a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::climbing(PlayerFSM* a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}