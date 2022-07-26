/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:43:10 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/25 13:24:50 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	number;

	i = 0;
	neg = 1;
	number = 0;
	while (str[i] == 32 || (str[1] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+'
		|| str[i] == '-')
	{
		if (str[i] == '-')
		neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number = number + str[i] - '0';
		i++;
	}
	number = number * neg;
	return (number);
}

int	main(void)
{
	char str[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}