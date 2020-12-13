#include <windows.h>
#include "pch.h"

#define LIBDLL extern "C" __declspec(dllexport)

int maxValue(int a, int b)
{
	return a > b ? a : b;
}

LIBDLL int sum(int a, int b)
{
	return a + b;
}

LIBDLL void showMessage(char* title, char* description)
{
	MessageBox(
		NULL,
		(LPCTSTR) title,
		(LPCTSTR) description,
		MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
	);
}
