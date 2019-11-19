#include "craftedWeapon.h"

rpg::CraftedWeapon::CraftedWeapon(IntegerItem* damage)
{
	this->m_damage = damage;
}

rpg::CraftedWeapon::CraftedWeapon(const CraftedWeapon& cw)
{
	this->m_damage = cw.m_damage;
}

rpg::CraftedWeapon::CraftedWeapon()
{
	this->m_damage = 0;
}
