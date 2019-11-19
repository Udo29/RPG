#pragma once
#include "integerItem.h"
#include "weapon.h"
#include "item.h"


namespace rpg
{
	class CraftedWeapon : public Weapon , public Item
	{
	public:
		CraftedWeapon(IntegerItem* damage);
		CraftedWeapon(const CraftedWeapon& cw);
		CraftedWeapon();

	};
}