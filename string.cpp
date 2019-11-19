#include "string.h"
#include <string>
#include <iostream>

using namespace rpg;

String::String(std::string str) : m_str(str){}

String::String(const String &str) : m_str(str.m_str){}

String::String() : m_str(""){}

rpg::String::~String()
{
}

String::operator const char* () const
{
    return this->m_str.c_str();
}

String String::operator+ (String &str)
{
    return m_str + str.m_str;
}

String String::operator+ (const char* str)
{
    return m_str + str;
}

String rpg::String::operator=(const char* str)
{
	return String(str);
}

String rpg::String::operator=(const String& str)
{
	return String(str.m_str);
}

int rpg::String::getStringLength(std::string str)
{

	return str.size();
}

bool rpg::operator==(const String& str1, const String& str2)
{
	return str1.m_str == str2.m_str;
}

bool rpg::operator==(const char* str1, const String& str2)
{
	return str1 == str2.m_str;
}

bool rpg::operator==(const String& str2, const char* str1)
{
	return str1 == str2.m_str;
}

String rpg::operator+(const char* p, String& str)
{
	return String(p + str.m_str);
}
