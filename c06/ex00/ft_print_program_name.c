/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:33:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/25 18:25:35 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argnum, char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = argnum;
	while (arg[0][i] != '\0')
	{
		write (1, &arg[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
