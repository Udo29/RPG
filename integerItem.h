#pragma once


namespace rpg
{
class IntegerItem
{
public:
    int virtual getValue() = 0;
    int virtual getMaxValue() = 0;
    int virtual getMinValue() = 0;
	void virtual setValue(int i) = 0;
};
}