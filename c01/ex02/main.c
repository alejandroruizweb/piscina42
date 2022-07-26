/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:58:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/13 12:50:54 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	valor1;
	int	valor2;
	int	*a;
	int	*b;

	valor1 = 1;
	valor2 = 2;
	a = &valor1;
	b = &valor2;
	ft_swap(a, b);
	printf("%d", valor1);
	printf("%d", valor2);
}
