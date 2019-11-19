#pragma once

#include <string>
#include "integerItem.h"

namespace rpg
{
    class Race
    {
        private:
          IntegerItem * m_physicFormula;
          IntegerItem * m_mentalFormula;
        public:
          Race(IntegerItem* m_physicFormula, IntegerItem* m_mentalFormula);
          Race(const Race &r);
          IntegerItem* getPhysicFormula();
          IntegerItem* getMentalFormula();
		  
    };

}