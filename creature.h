#pragma once

#include <string>
#include "damageable.h"
#include "race.h"


using namespace std;

namespace rpg
{
  class Creature : public Damageable
  {
    private:
		int m_physic;
		int m_mental;
		int m_hitPoints;
		string m_name;
    public:
		Creature(string name, Race r);
		Creature();
      
  };
}
