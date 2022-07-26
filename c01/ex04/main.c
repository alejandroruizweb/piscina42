/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:58:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/13 16:32:39 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	valor1;
	int	valor2;
	int	*a;
	int	*b;

	a = &valor1;
	b = &valor2;
	valor1 = 10;
	valor2 = 5;
	ft_ultimate_div_mod(a, b);
	printf("%d", valor1);
	printf("%d", valor2);
	return (0);
}
