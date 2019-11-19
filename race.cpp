#include "race.h"
#include <iostream>
using namespace rpg;

Race::Race(IntegerItem *m_physicFormula, IntegerItem *m_mentalFormula)
{
  this->m_physicFormula = m_physicFormula;
  this->m_mentalFormula = m_mentalFormula;
}

Race::Race(const Race &r)
{
  this->m_physicFormula = r.m_physicFormula;
  this->m_mentalFormula = r.m_mentalFormula;
}

IntegerItem* Race::getMentalFormula()
{
  return this->m_physicFormula;
}

IntegerItem* Race::getPhysicFormula()
{
  return this->m_mentalFormula;
}