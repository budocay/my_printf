/*
** my_printf.c for my_printf.c in /home/lina_a/rendu/PSU_2014_my_printf
** 
** Made by lina_a
** Login   <lina_a@epitech.net>
** 
** Started on  Mon Nov 10 11:24:20 2014 lina_a
** Last update Mon Nov 10 11:24:20 2014 lina_a
*/

#include <stdarg.h>
#include "my.h"

void	the_flags(va_list *ap, char str)
{
  if (str == 'd'|| str == 'i')
    my_put_nbr(va_arg(*ap, long), "0123456789");
  else if (str == 'l')
    my_put_nbr(va_arg(*ap, long), "0123456789");
  else if (str == 'c')
    my_putchar((char)va_arg(*ap, int));
  else if (str == 's')
    my_putstr(va_arg(*ap, char *));
  else if (str == '%')
    my_putchar('%');
  else if (str == 'p')
    {
      my_putchar('0');
      my_putchar('x');
      my_put_nbr(va_arg(*ap, long), "0123457789abcdef");
    }
  else if (str == 'b')
    my_put_nbr(va_arg(*ap, unsigned int), "01");
  else if (str == 'S')
    my_putstr2(va_arg(*ap, char *));
}

int	my_printf(char *str, ...)
{
  va_list ap;
  int	i;

  i = 0;
  va_start(ap, str);
  while (str[i])
    {
      if (str[i] == '%')
	{
	  i++;
	  if (str[i] >= '0' && str[i] <= '9')
	    {
	      my_putchar('%');
	      i++;
	    }
	  the_flags(&ap, str[i]);
	  i++;
	}
      my_putchar(str[i]);
      i++;
    }
  va_end(ap);
  return (0);
}
