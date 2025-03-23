/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:38:13 by root              #+#    #+#             */
/*   Updated: 2025/03/23 22:50:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main ()
{
      int i;
      char *cp;

      cp = "a string";
      while(*cp != 0){
              //putchar(*cp);
              write(1, cp, 1);
              cp++;
      }
      //putchar('\n');
      write(1, "\n", 1);

      for(i = 0; i < 8; i++)
              //putchar("a string"[i]);
              write(1, ("a string") + i, 1);
      //putchar('\n');
      write(1, "\n", 1);
      return (0);
}
