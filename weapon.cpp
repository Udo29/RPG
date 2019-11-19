#include "weapon.h"

rpg::Weapon::Weapon(IntegerItem* damage)
{
	this->m_damage = damage;
}

rpg::Weapon::Weapon()
{
	this->m_damage = 0;
}

