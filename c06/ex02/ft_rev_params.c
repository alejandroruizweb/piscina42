/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:17:16 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/26 11:51:54 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argnum, char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = argnum -1;
	if (argnum > 1)
	{
		while (j != 0)
		{
			i = 0;
			while (arg[j][i] != '\0')
			{
				write (1, &arg[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j--;
		}
	}
	return (0);
}
