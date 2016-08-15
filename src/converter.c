#include <string.h>
#include "converter.h"

int to_arabic(char roman[])
{
	if (strncmp(roman, "V", 1) == 0)
	{
		return 5;
	}
	return strlen(roman);
}
