#include "damageable.h"
#include <iostream>

using namespace rpg;

Damageable::Damageable()
{
  this->m_hitPoints = 5;
}

Damageable::Damageable(double hitPoints, string name)
{
  this->m_hitPoints = hitPoints;
  this->m_name = name;
}

double Damageable::getHitPoints()
{
  return this->m_hitPoints;
}

string Damageable::getName()
{
  return this->m_name;
}

string Damageable::setName(string name)
{
  return this->m_name = name;
}

void Damageable::damage(int damage)
{
  this->m_hitPoints = this->m_hitPoints - (double)damage;
  if(this->m_hitPoints < 0) this->m_hitPoints = 0;
}

bool Damageable::isDead()
{
  if(this->m_hitPoints <= 0)return true;
  else return false;
}

void Damageable::healRepair(int heal)
{
  if(!isDead())
    this->m_hitPoints = this->m_hitPoints + (double)heal;
}
