#include <iostream>
#include <string>

#include <Windows.h>
#include <comdef.h>

#include "include/WideString.hpp"

struct WindowInfo
{
	std::wstring WinTitle = L"Directx11 Game Engine";
	const int WinWidth = 1280;
	const int WinHeight = 720;
};

static void LogError(HRESULT hResult, std::wstring errorMessage)
{
	_com_error error(hResult);
	std::wstring error_message = errorMessage + L"\n\n" + error.ErrorMessage();
	MessageBoxW(NULL, error_message.c_str(), L"Game Engine Error", MB_ICONERROR);
}

int main(int argc, char* argv[])
{
	// Register the window class
	const wchar_t WindowClass[] = L"Directx11 Engine Window Class";
	WNDCLASS wc = { };

	LogError(E_ABORT, WideString("Hello, World!"));
	return 0;
}