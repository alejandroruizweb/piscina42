/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:58:26 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/24 13:28:38 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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