#include "main.h"

/**
* set_string - a function that sets the value of a pointer to a char
* @s: a pointer that points to a pointer that points to a char
* @to: a pointer that points to a character
* Return: returns nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}