/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:07:36 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/18 13:51:14 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)

{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] = (int)str[i] -32;
				j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		j = 0;
		else
		j = 1;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] = (int)str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hola como va $todo, bien gracias";
	
	ft_strcapitalize(str);
	printf("%s", str);

}
