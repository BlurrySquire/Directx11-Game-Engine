#ifndef ERROR_LOGGER_HPP
#define ERROR_LOGGER_HPP

#include <iostream>
#include <string>

#include <Windows.h>
#include <comdef.h>

static void LogError(HRESULT hResult, std::wstring errorMessage)
{
	_com_error error(hResult);
	std::wstring error_message = errorMessage + L"\n\n" + error.ErrorMessage();
	MessageBoxW(NULL, error_message.c_str(), L"Game Engine Error", MB_ICONERROR);
}

#endif