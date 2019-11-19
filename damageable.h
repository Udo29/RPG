#pragma once

#include <string>
using namespace std;

namespace rpg
{
class Damageable
{
private:
  double m_hitPoints;
  string m_name;

public:
  Damageable();
  Damageable(double hitPoints, string name);
  double getHitPoints();
  string getName();
  string setName(string);
  void damage(int damage);
  bool isDead();
  void healRepair(int heal);


};
}
