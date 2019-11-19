#pragma once

#include <string>
#include "damageable.h"
using namespace std;

namespace rpg
{
class Item : public Damageable
{
private:
  double m_value;
public:
  Item(double value);
  Item(const Item &i);
  Item();

};
}
