/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:58:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/14 18:05:15 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include <string.h>
//Este main va pegado en el otro archivo.
int	main(void)
{
	int	i;
	int	*tab;
	int	cadena [] = {1, 2, 3, 4};
	int	size = 4;
    tab = cadena;
    i = 0;
    ft_rev_int_tab(tab ,size);
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
} 