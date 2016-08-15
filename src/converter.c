#include <string.h>
#include "converter.h"

typedef struct Conversion {
	char* roman;
	int arabic;
} Conversion;

Conversion conversions[] = {
	{"X", 10},
	{"V", 5},
	{"IV", 4},
	{"I", 1},
	{"END", 0}
};

int to_arabic(char roman[])
{
	int total = 0;
	for (Conversion* conversion = conversions; conversion->arabic != 0; conversion++)
	{
		int roman_length = strlen(conversion->roman);
		while (strncmp(roman, conversion->roman, roman_length) == 0)
		{
			total += conversion->arabic;
			roman += roman_length;
		}
	}
	return total;
}
