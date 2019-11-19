#include "IntegerValue.h"
#include <algorithm>
#include <limits.h>

using namespace rpg;

IntegerValue::IntegerValue(int val) : m_value(val){}


IntegerValue::IntegerValue(const IntegerValue &val)
{
    this->m_value = val.m_value;
}

int IntegerValue::getMaxValue()
{
  return INT_MAX;
}

int IntegerValue::getMinValue()
{
  return INT_MIN;
}

void rpg::IntegerValue::setValue(int i)
{
	this->m_value = i;
	
}

IntegerValue::operator int() const
{
    return m_value;
}