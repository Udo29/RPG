#pragma once
#include "integerItem.h"

namespace rpg
{
    class Dice : public IntegerItem
    {
    public:
        int m_nbFaces;
		int m_min;
		int m_baseFaces;
    
        Dice(int nb, int min);
		Dice(int nb);
        Dice();
		int getValue() override;
		void setValue(int i) override;
		int getMaxValue() override;
		int getMinValue() override;
		Dice operator+ (Dice& d);
		Dice operator+ (int i);
    };
	
	
}