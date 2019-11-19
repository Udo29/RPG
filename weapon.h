#pragma once
#include "integerItem.h"


namespace rpg
{
	class Weapon
	{
	public:
		IntegerItem* m_damage;
	public:
		Weapon(IntegerItem* damage);
		Weapon();

	};
}