#include <iostream>
#include <string>

#include <Windows.h>
#include <comdef.h>

#include "include/WideString.hpp"
#include "include/ErrorLogger.hpp"

struct WindowInfo
{
	std::wstring WinTitle = L"Directx11 Game Engine";
	const int WinWidth = 1280;
	const int WinHeight = 720;
};

int main(int argc, char* argv[])
{
	// Register the window class
	const wchar_t WindowClass[] = L"Directx11 Engine Window Class";
	WNDCLASS wc = { };

	LogError(E_ABORT, WideString("Hello, World!"));
	return 0;
}