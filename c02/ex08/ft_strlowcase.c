/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:50:29 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/18 13:30:20 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	char	str[] = "HOLAsss";
	
	ft_strlowcase(str);
	printf("%s", str);

}