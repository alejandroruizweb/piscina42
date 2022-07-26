/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:50:58 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/12 13:15:32 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cifras(char c);

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			cifras (a / 10 + '0');
			cifras (a % 10 + '0');
			write (1, " ", 1);
			cifras (b / 10 + '0');
			cifras (b % 10 + '0');
			if (a / 10 != 9 || a % 10 != 8)
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

void	cifras(char c)
{
	write(1, &c, 1);
}
