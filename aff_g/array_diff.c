/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_diff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaziz <alaziz@student.42,fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:55:31 by aaziz             #+#    #+#             */
/*   Updated: 2025/03/23 21:03:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define ARSZ 10

int main(void)
{
      float fa[ARSZ], *fp1, *fp2;

      fp1 = fp2 = fa; /* address of first element */
      while(fp2 != &fa[ARSZ]){
              printf("Difference: %ld\n", (long)(fp2-fp1));
              fp2++;
      }
      exit(EXIT_SUCCESS);
}
