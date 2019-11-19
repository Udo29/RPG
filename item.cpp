#include "item.h"
#include <iostream>

using namespace rpg;

Item::Item(double value)
{
	this->m_value = value;
}

rpg::Item::Item(const Item& i)
{
	this->m_value = i.m_value;
}

rpg::Item::Item()
{
	this->m_value = 0;
}
