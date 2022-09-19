#include "main.h"
/**
 * _atoi - convert string to int
 * @s: string
 * Return: Number
 */
int _atoi(char *s)
{
int i = 0;
int res;
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
if (s[i - 1] == '-')
{
_putchar('-');
}
if ((s[i + 1] > '9') || (s[i + 1] < '0'))
{
_putchar(s[i]);
break;
}
res = s[i];
_putchar(res);
}
i++;
}
return (0);
}
