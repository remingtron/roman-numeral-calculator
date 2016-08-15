#include <string.h>
#include "converter.h"

int to_arabic(char roman[])
{
	int total = 0;
	if (strncmp(roman, "X", 1) == 0)
	{
		total += 10;
		roman++;
	}
	if (strncmp(roman, "V", 1) == 0)
	{
		total += 5;
		roman++;
	}
	return total + strlen(roman);
}
