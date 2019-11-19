#pragma once
#include <string>

namespace rpg
{
    class String
    {
    public:
        std::string m_str;
    public:
        String(std::string str);
        String(const String &val);
        String();
		~String();
        operator const char* () const ;
        String operator+ (String &str);
        String operator+ (const char *str);
		String operator= (const char* str);
		String operator= (const String& str); 
		
    private:
        int getStringLength(std::string str);

    };
	bool operator== (const String& str1, const String& str2);
	bool operator== (const char* str1, const String& str2);
	bool operator==(const String& str2, const char* str1);
    String operator+ (const char *p, String &str);
  
}
  
