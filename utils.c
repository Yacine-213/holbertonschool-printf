#include "main.h"

/**
 * _putchar - Écrit un caractère sur stdout
 * @c: Caractère à écrire
 *
 * Return: 1 en cas de succès
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Affiche un caractère
 * @args: Liste d'arguments variadiques
 *
 * Return: Nombre de caractères affichés
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_string - Affiche une chaîne de caractères
 * @args: Liste d'arguments variadiques
 *
 * Return: Nombre de caractères affichés
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str)
		str = "(null)";

	while (str[i])
		_putchar(str[i++]);

	return (i);
}
