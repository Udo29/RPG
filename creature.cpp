#include "creature.h"


using namespace rpg;

Creature::Creature(string name, Race r)
{
	this->m_name = name;
	this->m_hitPoints = r.getPhysicFormula()->getValue();
	this->m_physic = r.getPhysicFormula()->getValue();
	this->m_mental = r.getMentalFormula()->getValue();
}

Creature::Creature()
{
	this->m_name = "";
	this->m_hitPoints = 0;
	this->m_mental = 0;
	this->m_physic = 0;
}
