#include <string.h>
#include "converter.h"

typedef struct Conversion {
	char* roman;
	int arabic;
} Conversion;

Conversion conversions[] = {
	{"X", 10},
	{"V", 5},
	{"I", 1},
	{"END", 0}
};

int to_arabic(char roman[])
{
	int total = 0;
	for (Conversion* conversion = conversions; conversion->arabic != 0; conversion++)
	{
		while (strncmp(roman, conversion->roman, 1) == 0)
		{
			total += conversion->arabic;
			roman++;
		}
	}
	return total;
}
