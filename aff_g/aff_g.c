/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_g.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaziz <alaziz@student.42,fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:36:47 by aaziz             #+#    #+#             */
/*   Updated: 2025/03/23 23:46:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int main (int argc, char **argv)
{
	char g;
    char *str;
	int i;

	if (argc != 2)
	{
		printf("0 argument or plus \n");
        write(1, "g", 1);
		write(1,"\n", 1);
        return 0;
	}
	else
	{
    //printf("argc = %d\n", argc);
		argv++;
        str = *argv;
        //printf("argv = %s\n", str);
		while( *str != 0)
		{
            //printf("str = %c\n", *str);
			if (*str == 'g')
			{
				printf("in if == g\n");
                write(1, "g", 1);
				write(1, "\n", 1);
                return 0;
			}
            str++;
		}
    }
    printf(" no g found \n");
	write(1, "g", 1);
	write(1, "\n", 1);
}
