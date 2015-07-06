/*
** main.c for main_de_tesst in /home/lina_a/rendu/PSU_2014_my_printf
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Nov 13 11:22:48 2014 lina_a
** Last update Thu Nov 13 11:22:48 2014 lina_a
*/

#include <stdlib.h>
#include "my.h"

int	main()
{
  char	str[] = "coucou vive EPitech";

  my_printf ("%s\n", str);
  my_printf ("%d\n", 66);
  my_printf ("%l\n", 12345668989);
  my_printf ("%c\n", 'e');
  my_printf ("%%\n");
  my_printf("%p\n", str);
  my_printf ("%b\n", str);
  my_printf("%S\n",str);
  return (0);
}
