#include <windows.h>
#include "pch.h"

#define LIBDLL extern "C" __declspec(dllexport)


LIBDLL int max(int a, int b)
{
	return a > b ? a : b;
}

LIBDLL int sum(int a, int b)
{
	return a + b;
}

LIBDLL void showMessage()
{
	MessageBox(
		NULL,
		(LPCTSTR) "Ola, mundo",
		(LPCTSTR) "Hello World",
		MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
	);
}
