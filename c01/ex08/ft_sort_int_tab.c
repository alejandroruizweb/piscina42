/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:56:45 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/15 12:06:29 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	size;
	int	*tab;
	int	cadena [] = {8, 9, 5, 7, 1};
	int	temporal;
	int	i;
	int	d;
	int x;
	int c;
	
	c = 0;
	size = 0;

	while (size < 5)
	{
		size = 0;
		while (d < 5)
		{
			i = 0;
			d = 1;
			if (cadena[i] > cadena[d])
			{
				temporal = cadena[d];
				cadena[d] = cadena[i];
				cadena[i] = temporal;
			}
			i++;
			d++;
		}
		size++;
	}
	while (x < 5)
	{
		x = 0;
		printf("%d", cadena[x]);
		x++;
	}
}
