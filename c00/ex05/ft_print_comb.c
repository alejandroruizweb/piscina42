/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:53:09 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/12 13:15:23 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_comas(char a, char b, char c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a +1;
		while (b <= '8')
		{
			c = b +1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				ft_print_comas (a, b, c);
					c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comas(char a, char b, char c)
{
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}
