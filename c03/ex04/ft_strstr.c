/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:03:52 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/23 12:36:27 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{		
		while (str[i + j] == to_find[j]
			&& str[i + j] != '\0')
		{	
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "En un lugar de la mancha de cuyo nombre no quiero acordarme.";
	char to_find[] = "cuyo";

printf("%s", ft_strstr(str, to_find));
}
