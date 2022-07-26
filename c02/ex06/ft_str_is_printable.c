/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:29:02 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/18 12:35:50 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((int)str[i] >= 32 && (int)str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[] = " ";
	ft_str_is_printable(str);
	printf("%d", ft_str_is_printable(str));
}