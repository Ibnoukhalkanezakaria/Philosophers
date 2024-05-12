/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:07:51 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/12 18:45:47 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

long	ft_atoi(char *s)
{
	long long	one;
	long long	number;

	number = 0;
	one = 1;
	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			one *= -1;
	}
	if (!(*s >= '0' && *s <= '9'))
		return (0);
	while (*s >= '0' && *s <= '9')
	{
		number = number * 10 + (*s - '0');
		s++;
	}
	return (number * one);
}
