/*
** my.h for my in /home/lina_a/rendu/PSU_2014_my_printf/lib/my
** 
** Made by lina_a
** Login   <lina_a@epitech.net>
** 
** Started on  Sun Nov 16 14:15:23 2014 lina_a
** Last update Sun Nov 16 14:15:23 2014 lina_a
*/

#ifndef MY_H_
# define MY_H

#include <stdarg.h>

void	my_putchar(char c);
int	my_putstr(char *str);
int	my_abs(long nb);
int	my_strlen(char *str);
int	my_printf(char *str, ...);
int	my_put_nbr(long nb, char *base);
void	the_flags(va_list *ap, char str);
int	my_putstr2(char *str);

#endif
