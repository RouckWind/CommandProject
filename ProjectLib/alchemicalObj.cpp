#include <iostream>
#include "alchemicalObj.h"

Water::~Water()
{
	std::cout << "delete Water" << '\n';
}

Water::Water()
{
	std::cout << "create Water" << '\n';
}

Fire::Fire()
{
	std::cout << "create Fire" << '\n';
}

Fire::~Fire()
{
	std::cout << "delete Fire" << '\n';
}

Air::Air()
{
}

Ground::Ground()
{
}

Steam::Steam()
{
	std::cout << "create Steam" << '\n';
}

Steam::~Steam()
{
	std::cout << "delete Steam" << '\n';
}
