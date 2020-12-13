#include <windows.h>
#include "pch.h"

#define LIBDLL extern "C" __declspec(dllexport)

LIBDLL int maxValue(int a, int b)
{
	return a > b ? a : b;
}

LIBDLL int sum(int a, int b)
{
	return a + b;
}

LIBDLL void showMessage(const char* title, const char* description)
{
	MessageBox(
		NULL,
		(LPCTSTR) description,
		(LPCTSTR) title,
		MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
	);
}
