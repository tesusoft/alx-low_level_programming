/*
* File: 3-islower.c
* Auth: Oyetesu Olumide
*/

#include "main.h"

/**
*_islower - Check for a lowercase in a char.
*@c: The character to be checked.
*
*Return: 1 if character is lowercase, else 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
