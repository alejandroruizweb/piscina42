/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:58:26 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/24 12:47:00 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i]
		&& s1[i] != '\0'
		&& i < n - 1)
	{
		i++;
	}	
	return (s1[i] - s2[i]);
}

int main(void)
{
	char s1[] = "";
	char s2[] = "";
    unsigned int n;

    n = 3;
	ft_strncmp(s1, s2, n);
	printf("%d", ft_strncmp(s1, s2, n));
}
//Esta función te compara string hasta que encuentra algo diferente y te da la diferencia.
//Hasta el valor n.