/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:08:41 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/15 09:56:17 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temporal;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temporal = tab[i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = temporal;
		++i;
	}
}
