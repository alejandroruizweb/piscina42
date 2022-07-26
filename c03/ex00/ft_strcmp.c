/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:27:28 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/23 09:40:47 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i]
		&& (s1[i] != '\0'
			|| s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char s1[] = "";
	char s2[] = "";

	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
}
//Esta función te compara string hasta que encuentra algo diferente y te da la diferencia.