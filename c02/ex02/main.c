/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:23:43 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/18 12:16:19 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	str[] = "sdgsdgsdgAAAAA";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
}