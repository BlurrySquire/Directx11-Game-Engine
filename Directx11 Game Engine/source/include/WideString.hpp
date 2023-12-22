#ifndef WIDE_STRING_HPP
#define WIDE_STRING_HPP

#include <iostream>
#include <string>

static std::wstring WideString(std::string string)
{
	return std::wstring(string.begin(), string.end());
}

#endif