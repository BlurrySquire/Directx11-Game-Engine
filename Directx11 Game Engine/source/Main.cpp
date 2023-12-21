#include <iostream>
#include <string>

#include <Windows.h>
#include <comdef.h>

static std::wstring WideString(std::string string)
{
	return std::wstring(string.begin(), string.end());
}

static void LogError(HRESULT hResult, std::wstring errorMessage)
{
	_com_error error(hResult);
	std::wstring error_message = errorMessage + L"\n\n" + error.ErrorMessage();
	MessageBoxW(NULL, error_message.c_str(), L"Game Engine Error", MB_ICONERROR);
}

int main(int argc, char* argv[])
{
	LogError(E_ABORT, WideString("Hello, World!"));
	return 0;
}