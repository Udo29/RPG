#include "dice.h"
#include <cstdlib>
#include <iostream>
#include <random>
#include <ctime>


using namespace rpg;

Dice::Dice() : m_nbFaces(0), m_min(0), m_baseFaces(0) { std::srand(std::time(0)); }
Dice::Dice(int val) : m_nbFaces(val), m_baseFaces(val), m_min(1) { std::srand(std::time(0)); }
Dice::Dice(int val, int min) : m_nbFaces(val), m_baseFaces(val), m_min(min) { std::srand(std::time(0)); }

int Dice::getValue()
{
    return m_min + (std::rand() % m_nbFaces - m_min + 1);
}

void Dice::setValue(int i)
{
	this->m_nbFaces = i;
}

int Dice::getMaxValue()
{
	return m_nbFaces;
}

int Dice::getMinValue()
{
	return m_min;
}

Dice rpg::Dice::operator+(Dice& i)
{
	return Dice{ m_nbFaces + i.m_baseFaces, m_min + 1 };
}

Dice rpg::Dice::operator+(int i)
{	
	return Dice{ m_nbFaces + i, m_min + i };
}