#include <stdio.h>

#ifdef _WIN32
#   define DLL_EXPORT __declspec(dllexport)
#else
#    define DLL_EXPORT
#endif

DLL_EXPORT int add(int a, int b)
{
	return (a + b);
}

DLL_EXPORT int sub(int a, int b)
{
	return (a - b);
}

DLL_EXPORT int mul(int a, int b)
{
	return (a * b);
}

DLL_EXPORT int div(int a, int b)
{
	return (a / b);
}

DLL_EXPORT int mod(int a, int b)
{
	return (a % b);
}
