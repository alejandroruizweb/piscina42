/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:58:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/13 15:17:37 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*div;
	int	*mod;

	div = &c;
	mod = &d;
	a = 2;
	b = 2;
	ft_div_mod(a, b, div, mod);
	printf("%d", c);
	printf("%d", d);
	return (0);
}
