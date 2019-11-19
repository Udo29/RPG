#pragma once
#include "dice.h"

namespace rpg
{
    class IntegerValue : public IntegerItem
    {
    private:
        int m_value;
    public:
        IntegerValue(int val);
        IntegerValue(const IntegerValue &val);
		int getMaxValue() override;
        int getMinValue() override;
		void setValue(int i) override;

        operator int() const;
    };
}